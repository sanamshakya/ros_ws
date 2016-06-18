#!/usr/bin/env python
import time
import rospy
from geometry_msgs.msg import Twist

cmd_vel_pub = rospy.Publisher('cmd_vel', Twist, queue_size=1)
rospy.init_node('red_light_green_light')

red_light_twist = Twist()
green_light_twist = Twist()
green_light_twist.linear.x = 0.5

driving_forward = False

light_change_time = rospy.Time.from_sec(time.time())
rate = rospy.Rate(10)
print light_change_time
light_change_time_new = light_change_time + rospy.Duration(3)

while not rospy.is_shutdown():
    light_change_time = rospy.Time.from_sec(time.time())
    if driving_forward:
        cmd_vel_pub.publish(green_light_twist)
    else:
        cmd_vel_pub.publish(red_light_twist)
    if light_change_time > light_change_time_new:
        driving_forward = not driving_forward
        light_change_time_new = light_change_time + rospy.Duration(3)
    rate.sleep()
    print light_change_time.secs, light_change_time.nsecs
