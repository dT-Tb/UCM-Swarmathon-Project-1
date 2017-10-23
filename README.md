# UCM-Swarmathon-Project-1

The purpose of this repository is to provide skeleton code for the University of California, Merced Swarmathon team members to complete their first mini project leading up to the Swarmathon in the Robotic Operating System (ROS). The goal is to control a turtle using a proportional controller by utilizing the [ROS PID package](http://wiki.ros.org/pid). 

Do not copy and paste the commands into your terminal. As you type in the command try to understand what they mean, if you do not know, then look it up! Remember to utilize tab completion.

## Getting set up

#### 1. Create your catkin workspace

    mkdir -p ~/project1/src/ 
    cd ~/project1/src/
    catkin_init_workspace
    cd ~/project1/
    echo "source ~/project1/devel/setup.bash" >> ~/.bashrc
    catkin build
    
If your workspace compiled then you're ready for the next step! If not, let me know and I will help you figure it out. 

#### 2. Clone the skeleton code

    cd ~/project1/src/
    git clone https://github.com/ManuelMeraz/UCM-Swarmathon-Project-1 turtle_pid
    cd ~/project1/
    catkin build
    source ~/.bashrc
    
The skeleton code should compile, but the nodes will not work! Your job is to implement them. 
    
## Project Specifications

We are going to spin the turtle around in a circle, as such we will not worry about the `x` and `y` position of the turtle. We will be looking at the turtle's [`yaw`](https://en.wikipedia.org/wiki/Yaw_(rotation)). 

You will need to implement the following nodes: `setpoint_node` and `transformer`.

There will be 4 setpoints: `[0, pi/2, pi, 3pi/2]` 

I don't care about the particular angle values, because in the end, mathematically speaking `0 == 2pi`. So if you want to use
the setpoints: `[0, pi/2, -pi,2, pi]`, it doesn't matter. The main goal is to see the turtle spin around and controlled by the PID controller package. 

In the file `setpoint_node.cpp` you will have this node publish out the setpoints to the topic `/setpoint` at a set interval using a timer, which wil be provided for you. It's up to you how this happens.

To accomplish this you will need to use the following message types: `std_msgs/Float64` 

For the second node, in the file `transformer.cpp` you will transform the information coming out of the PID controller nodes to twist commands. 

You will need to subscribe to the following topics: `/control_effort` and `turtle1/pose`

Using the informatin acquired through thosen topics, you will do some computation and publish the information
out to: `turtle1/cmd_vel` and `/state`

The following message types will be required: `turtlesim/Pose`, `geoetry_msgs/Twist`, and `std_msgs/Float64`

When you are done writing the code, you can test your nodes individually and then when your project is complete, it should be run with the launch file provided. 

`roslaunch turtle_pid turtlesim_pid.launch`

![turtle_pid](https://github.com/ManuelMeraz/UCM-Swarmathon-Project-1/blob/master/turtle_pid.png?raw=true)
