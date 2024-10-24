#include <iostream>
#include <cmath>
#include <mbot_bridge/robot.h>
#include <wall_follower/common/utils.h>

int main(int argc, const char *argv[])
{
    // Initialize the robot.
    mbot_bridge::MBot robot;

    // Define time intervals
    const double forward_time = 2.0;  // Time to drive straight (adjust as needed)
    const double turn_time = 1.0;     // Time to turn (adjust as needed)

    // Number of times to drive in a square
    const int repetitions = 3;

    // Drive in a square three times
    for (int i = 0; i < repetitions; ++i) {
        // Drive forward
        robot.drive(0.5, 0.0, 0.0); // Forward at vx = 0.5, vy = 0, wz = 0
        sleepFor(forward_time);      // Sleep for the forward duration

        // Turn 90 degrees
        robot.drive(0.0, 0.0, 1.0); // Rotate at wz = 1.0
        sleepFor(turn_time);         // Sleep for the turn duration

        // Drive forward
        robot.drive(0.5, 0.0, 0.0);  // Forward at vx = 0.5, vy = 0, wz = 0
        sleepFor(forward_time);       // Sleep for the forward duration

        // Turn 90 degrees
        robot.drive(0.0, 0.0, 1.0); // Rotate at wz = 1.0
        sleepFor(turn_time);         // Sleep for the turn duration

        // Drive forward
        robot.drive(0.5, 0.0, 0.0);  // Forward at vx = 0.5, vy = 0, wz = 0
        sleepFor(forward_time);       // Sleep for the forward duration

        // Turn 90 degrees
        robot.drive(0.0, 0.0, 1.0); // Rotate at wz = 1.0
        sleepFor(turn_time);         // Sleep for the turn duration

        // Drive forward
        robot.drive(0.5, 0.0, 0.0);  // Forward at vx = 0.5, vy = 0, wz = 0
        sleepFor(forward_time);       // Sleep for the forward duration

        // Turn 90 degrees to complete the square
        robot.drive(0.0, 0.0, 1.0); // Rotate at wz = 1.0
        sleepFor(turn_time);         // Sleep for the turn duration
    }

    // Stop the robot.
    std::cout << "Stopping the robot!!" << std::endl;
    robot.stop();
    return 0;
}
