from launch import LaunchDescription
from launch.actions import ExecuteProcess, RegisterEventHandler, Shutdown
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    # Micro-ROS Agent
    agent = ExecuteProcess(
        cmd=['ros2', 'run', 'micro_ros_agent', 'micro_ros_agent', 'serial', '--dev', '/dev/hexabot'],
        name='micro_ros_agent',
        output='screen'
    )

    # Driver Node
    driver = ExecuteProcess(
        cmd=['ros2', 'run', 'hexabot_driver', 'hexabot_node'],
        name='hexabot_driver',
        output='screen'
    )

    # Shutdown both if agent exits
    agent_exit = RegisterEventHandler(
        OnProcessExit(
            target_action=agent,
            on_exit=[Shutdown(reason="micro-ROS agent stopped")]
        )
    )

    # Shutdown both if driver exits
    driver_exit = RegisterEventHandler(
        OnProcessExit(
            target_action=driver,
            on_exit=[Shutdown(reason="hexabot driver stopped")]
        )
    )

    return LaunchDescription([agent, driver, agent_exit, driver_exit])
