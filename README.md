

### Steps to launch the simulation
#### Step 1 Clone the folder in /home/workspace/

#### Step 2 Compile the code
```sh
$ cd /home/workspace/build-world/
$ mkdir build
$ cd build/
$ cmake ../
$ make
```

#### Step 3 Add the library path to the Gazebo plugin path  
```sh
$ export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/workspace/build-world/build
```

#### Step 4 Run the Gazebo World file  
```sh
$ cd /home/workspace/build-world/world/
$ gazebo myworld
```

### Output
The welcome world message in console and a Gazebo World should both launch.


    
 