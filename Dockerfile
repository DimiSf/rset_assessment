FROM ubuntu:22.04
SHELL ["/bin/bash", "-c"]

# Non-interactive apt + locale
ARG DEBIAN_FRONTEND=noninteractive
ENV TZ=Etc/UTC LANG=en_US.UTF-8 LC_ALL=en_US.UTF-8

# Base tools + locales
RUN apt-get update && apt-get install -y --no-install-recommends \
      locales curl gnupg2 lsb-release software-properties-common wget \
  && locale-gen en_US en_US.UTF-8 \
  && rm -rf /var/lib/apt/lists/*

# ROS 2 apt source (classic keyring method — simple and fine)
RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.key | \
      gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg \
  && echo "deb [signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] \
      http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" \
      > /etc/apt/sources.list.d/ros2.list

# ROS 2 Desktop + dev deps (incl. colcon)
RUN apt-get update && apt-get install -y --no-install-recommends \
      ros-humble-desktop \
      libeigen3-dev libyaml-cpp-dev ros-humble-rviz-visual-tools \
      python3-colcon-common-extensions \
  && rm -rf /var/lib/apt/lists/*

# Auto-source ROS for all shells
RUN echo "source /opt/ros/humble/setup.bash" >> /etc/bash.bashrc

# Workspace
RUN mkdir -p /ros2_ws/src
WORKDIR /ros2_ws
