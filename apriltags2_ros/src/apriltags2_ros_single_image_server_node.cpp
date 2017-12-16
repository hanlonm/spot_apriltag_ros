#include "apriltags2_ros/common_functions.h"
#include "apriltags2_ros/single_image_detector.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "apriltags2_ros_single_image_server");

  ros::NodeHandle nh;
  ros::NodeHandle pnh("~");

  apriltags2_ros::SingleImageDetector continuous_tag_detector(nh, pnh);
  
  ros::spin();
}
