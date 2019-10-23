# Pendulum-Simulation
 A simulation of a dampened pendulum in simple two-dimensional harmonic motion. Created for an AP Physics C project in grade 12.
 
 The program simulates a 0.07kg bob mass on a 0.4048m pendulum arm with a temporal resolution of 10e-5s, for a large angle pendulum. Using the torque balance, ![equation](https://www.codecogs.com/eqnedit.php?latex=mL^2\ddot\theta&space;&plus;&space;bL^2\dot\theta&plus;mgL\sin\theta&space;=&space;0) (where _b_ is the damping coefficient), solving for _θ_, and substituting into the
angular kinematics equations, the angular positions and angular velocities for each time interval were computed. For the purpose of
the simulation, it is assumed that the damping drag force acts opposite to the mass’ linear velocity.
