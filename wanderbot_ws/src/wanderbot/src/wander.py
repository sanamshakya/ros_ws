#!/usr/bin/env python
import time
import rospy
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan

def scan_callback(msg):
    global g_range_ahead
    g_range_ahead= min(msg.ranges)

g_range_ahead = 1
scan_sub = rospy.Subscriber('scan', LaserScan, scan_callback)
cmd_vel_pub = rospy.Publisher('cmd_vel', Twist, queue_size=1)
rospy.init_node('wander')
state_change_time = rospy.Time.from_sec(time.time())
driving_forward = True
rate = rospy.Rate(10)

while not rospy.is_shutdown():
    time_now = rospy.Time.from_sec(time.time())
    if driving_forward:
        if (g_range_ahead < 0.8 or time_now>state_change_time):
            driving_forward = False
            state_change_time = time_now + rospy.Duration(5)
    else:
        if time_now > state_change_time:
            driving_forward = True
            state_change_time = time_now + rospy.Duration(30)
    twist = Twist()
    if driving_forward:
        twist.linear.x = 1
    else:
        twist.angular.z = 1
    cmd_vel_pub.publish(twist)

    rate.sleep()

