/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\S1775909                                         */
/*    Created:      Thu Nov 03 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 10, 11, 20   
// Motor2               motor         2               
// Motor3               motor         3               
// Motor4               motor         4               
// Motor5               motor         5               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
//  -----------------------------PLAN B---------------------------------


// -----START-----

// turn 90 degrees
Drivetrain.turnFor(right,90,degrees);
// foward 4 ft
Drivetrain.driveFor(forward,48,inches);
// turn 90 degrees
Drivetrain.turnFor(right,90,degrees);
// foward 1 ft
Drivetrain.driveFor(forward,12,inches);
// turn 180 degrees
Drivetrain.turnFor(right,180,degrees);
// roll the roller
...
// turn 180 degrees
Drivetrain.turnFor(right,180,degrees);
// foward 1 ft
Drivetrain.driveFor(forward,12,inches);
// turn -45 degrees
Drivetrain.turnFor(left,45,degrees);
// foward 2 ft
Drivetrain.driveFor(forward,24,inches);
// turn -45 degrees
Drivetrain.turnFor(left,45,degrees);
// foward 3 ft
Drivetrain.driveFor(forward,36,inches);
// shoot
...
// turn 180 degrees
Drivetrain.turnFor(right,180,degrees);
// foward 1 ft
Drivetrain.driveFor(forward,12,inches);
// turn -45 degrees
Drivetrain.turnFor(left,45,degrees);
// foward 2 ft
Drivetrain.driveFor(forward,24,inches);
// turn -135 degrees
Drivetrain.turnFor(left,135,degrees);
// foward 4 ft
Drivetrain.driveFor(forward,48,inches);
// shoot
...
// turn 135 degrees
Drivetrain.turnFor(right,135,degrees);
// foward 2 ft
Drivetrain.driveFor(forward,24,inches);
// turn -90 degrees
Drivetrain.turnFor(left,90,degrees);
// foward 1 ft
Drivetrain.driveFor(forward,12,inches);
// turn -90 degrees
Drivetrain.turnFor(left,90,degrees);
// foward 2 ft
Drivetrain.driveFor(forward,24,inches);
// shoot  
...
//turn 45 degrees

//forword 2 feet

//turn -45 degrees

// forward 1 
}
