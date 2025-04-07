#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "hexabot_driver/hexabot_driver.hpp"
#include "hexabot_msgs/msg/hexabot.hpp"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    std::shared_ptr<hexabot_driver> hexabot_node = std::make_shared<hexabot_driver>();
    //hexabot_node->formate_hexabot_message();

    rclcpp::spin(hexabot_node);
    rclcpp::shutdown();
    return 0;
}

