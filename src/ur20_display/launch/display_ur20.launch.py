from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Path to the main URDF xacro file
    urdf_file = PathJoinSubstitution([
        FindPackageShare("ur_description"),
        "urdf",
        "ur.urdf.xacro"
    ])

    # Expand the xacro with arguments for UR20
    robot_description = Command([
        "xacro ", urdf_file,
        " ur_type:=ur20",
        " name:=ur20"
    ])

    return LaunchDescription([
        # Robot State Publisher
        Node(
            package="robot_state_publisher",
            executable="robot_state_publisher",
            name="robot_state_publisher",
            parameters=[{"robot_description": robot_description}],
            output="screen"
        ),

        # Custom joint_publisher_node
        Node(
            package="ur20_display",
            executable="joint_publisher_node",
            name="ur20_display_node",
            output="screen"
        ),

        # RViz
        Node(
            package="rviz2",
            executable="rviz2",
            name="rviz2",
            arguments=["-d", PathJoinSubstitution([
                FindPackageShare("ur20_display"),
                "rviz",
                "view_ur20.rviz"
            ])],
            output="screen"
        ),

        # GUI joint state publisher (optional)
        # Node(
        #     package="joint_state_publisher_gui",
        #     executable="joint_state_publisher_gui",
        #     name="joint_state_publisher_gui",
        #     output="screen"
        # )
    ])
