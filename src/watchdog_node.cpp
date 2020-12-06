#include <ros/ros.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "watchdog");
    ros::NodeHandle nh, private_nh("~");
    ros::spin(); 
    return 0;
}