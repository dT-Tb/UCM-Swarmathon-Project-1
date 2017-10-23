#include <ros/ros.h>

ros::Subscriber control_sub;
ros::Subscriber state_sub;

ros::Publisher control_pub;
ros::Publisher state_pub;

void controlHandler(const std_msgs::Float64 &msg);
void stateHandler(const turtlesim::Pose &msg);
void timerHandler(const ros::TimerEvent&);

int main(int argc, char **argv) {
  ros::init(argc, argv, "transformer");
  ros::NodeHandle nh;
  ros::spin();
  return 0;
}

void controlHandler(const std_msgs::Float64 &msg) {
}
void stateHandler(const turtlesim::Pose &msg) {
}
