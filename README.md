# ROS-gmapping-and-navigation
using ros gmapping, amcl and move_base nodes

cd ros_ws  
sudo apt-get install ros-kinetic-joy  
run "catkin_make" make sure there are no errors.  
edit ~/.bashrc, add "source /home/..../rosws/devel/setup.bash" to the end of the .bashrc file.  
close the terminal and reopen the terminal   
run roscore  
run vrep, open scenes/assignment7.ttt  
. ~/ros-ws/devel/setup.bash  

*To gmapping:* we need 2 consoles  
rviz  
roslaunch nav_stack_tuning gmapping.launch    

then we can move the robot with arrow keys  

Constructed map can be save with *rosrun map_server map_saver -f <map directory>/map* without closing the roslaunch or rviz.    
*To navigation:*we need three consoles  
rviz  
roslaunch nav_stack_tuning amcl.launch    
roslaunch nav_stack_tuning mave_base.launch    
 
click 2D Nav Goal on rviz. then point someplace on the map.  
