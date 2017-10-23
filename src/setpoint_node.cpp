#include <ros/ros.h>

ros::Publisher setpoint_publisher;
ros::Timer heading_timer;

void headingTimerHandler(const ros::TimerEvent&);

int main(int argc, char **argv) {
  ros::init(argc, argv, "setpoint_node");
  ros::NodeHandle nh;
  ros::spin();
  return 0;
}

void headingTimerHandler(const ros::TimerEvent&) {
}
