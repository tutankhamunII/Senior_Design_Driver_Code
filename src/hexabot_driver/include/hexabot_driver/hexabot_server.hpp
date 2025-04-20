#include <functional>
#include <memory>
#include <thread>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"
#include "hexabot_msgs/action/direct_command.hpp"

class HexabotActionServer : public rclcpp::Node
{
    public:
    using MoveHexabot = hexabot_msgs::action::DirectCommand;
    using GoalHandle = rclcpp_action::ServerGoalHandle<MoveHexabot>;
    explicit HexabotActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
    
    private:
    rclcpp_action::Server<MoveHexabot>::SharedPtr action_server_;
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID& uuid,
    std::shared_ptr<const MoveHexabot::Goal> goal);
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle> goal_handle);
    void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle);
    void execute(const std::shared_ptr<GoalHandle> goal_handle);
};
