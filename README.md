# UCM-Swarmathon-Project-1

The purpose of this repository is to provide skeleton code for the University of California, Merced Swarmathon team members to complete their first mini project leading up to the Swarmathon in the Robotic Operating System (ROS). The goal is to control a turtle using a proportional controller by utilizing the [ROS PID package](http://wiki.ros.org/pid). 

Do not copy and paste the commands into your terminal. As you type in the command try to understand what they mean, if you do not know, then look it up! Remember to utilize tab completion.

## Getting set up

#### 1. Create your catkin workspace

    mkdir -p ~/project1/src/ 
    cd ~/project1/src/
    catkin_init_workspace
    cd ~/project1/src/
    echo "source ~/project1/devel/setup.bash" >> ~/.bashrc
    catkin build
    
If your workspace compiled then you're ready for the next step! If not, let me know and I will help you figure it out. 

#### 2. Clone the skeleton code

    cd ~/project1/src/
    git clone https://github.com/ManuelMeraz/UCM-Swarmathon-Project-1 turtle_pid
    cd ~/project1/src/
    catkin build
    
## Project Specifications


    
