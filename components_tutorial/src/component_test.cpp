#include "rclcpp/rclcppl.hpp"

namespace my_namespace{

	class MotorController : public rclcpp::Node
	{
		public:
			MotorController(const rclcpp::NodeOtins &options) : Node("motor_controller", options)
			{
				RCLCPP_INFO(this->get_logger(), "Hello");
			}
		private:
	};
}

#include  "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(my_namsapce::MotorController)
