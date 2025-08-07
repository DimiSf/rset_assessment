# Ubuntu 22.04.5 LTS (Jammy Jellyfish) as base image 
FROM ubuntu:22.04

# use the bash shell 
SHELL ["/bin/bash", "-c"]

# locale setup 
RUN apt update && apt install -y locales \
    && locale-gen en_US en_US.UTF-8

ENV LANG=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8

RUN apt update && apt install -y \
    curl \
    gnupg2 \
    lsb-release \
    software-properties-common \
    wget

RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.key | \
    gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg && \
    echo "deb [signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" \
    > /etc/apt/sources.list.d/ros2.list

# Install ROS2 pkgs

RUN apt update && apt install -y ros-humble-desktop

# Env setup 

RUN echo "source /opt/ros/humble/setup.bash" >> /etc/bash.bashrc

RUN apt install -y \
    libeigen3-dev \
    libyaml-cpp-dev \
    ros-humble-rviz-visual-tools


RUN mkdir -p /ros2_ws/src