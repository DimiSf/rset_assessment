FROM ubuntu:22.04
SHELL ["/bin/bash", "-c"]

ARG DEBIAN_FRONTEND=noninteractive
ENV TZ=Etc/UTC LANG=en_US.UTF-8 LC_ALL=en_US.UTF-8

# Base tools
RUN apt-get update && apt-get install -y --no-install-recommends \
    locales curl gnupg2 lsb-release software-properties-common wget \
 && locale-gen en_US en_US.UTF-8 \
 && rm -rf /var/lib/apt/lists/*

# Add ROS 2 apt repo
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key | \
    gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg \
 && echo "deb [signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] \
    http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" \
    > /etc/apt/sources.list.d/ros2.list

# Install ROS 2 Humble + dev tools
RUN apt-get update && apt-get install -y --no-install-recommends \
    ros-humble-desktop \
    ros-humble-rviz-visual-tools \
    ros-humble-joint-state-publisher \
    ros-humble-joint-state-publisher-gui \
    libeigen3-dev \
    libyaml-cpp-dev \
    python3-colcon-common-extensions \
 && rm -rf /var/lib/apt/lists/*

# Auto-source ROS
RUN echo "source /opt/ros/humble/setup.bash" >> /etc/bash.bashrc

# Workspace
RUN mkdir -p /ros2_ws/src
WORKDIR /ros2_ws
