import os
from launch import LaunchDescription
from launch_ros.actions import Node

laser_scan = Node( 
        package='my_package',
        executable='reading_laser',
        output='screen',
        remappings=[
            ('laser_scan','/dolly/laser_scan')
           ]
        )

def generate_launch_description():
    return LaunchDescription([
        laser_scan,
    ])
    