// AngleClassW3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES //Pi and Sqrt


#include <cmath> // Pi and Sqrt
#include <iostream>
#include <assert.h> // for asserts
#include "Angle.h"

using namespace std;

int main()
{
   // test case 1: Input: Pi, passes an angle in radians, updates 
   // angleRadians attribute, displays it in degrees.
   cout << "\nTest Case 1, Radians to degrees.\n";
   Angle testAngle;
   testAngle.setRadians(M_PI);
   //Output: 180 Degrees
   testAngle.display();

   // test case 2: Input: 270 degrees, changes an angle from degrees to 
   // to radians, normalizes the angle, updates angleRadians attribute,
   // displays it.
   cout << "\nTest Case 2\n";
   testAngle.setDegrees(270);
   //Output: 270 Degrees
   testAngle.display();

   // test case 3: Input: 5 Pi, normalizes a degree in radians, updates 
   // angleRadians attribute of Angle class, displays it.
   cout << "\nTest Case 3\n";
   testAngle.setRadians(M_PI * 5);
   double testRadians = testAngle.getRadians();
   cout << "\tThe current angle in radians: " << testRadians << endl;
   //Output: 180 Degrees
   testAngle.display();

   // test case 4: Input: 1081 degrees, changes an angle from degrees to 
   // radians, normalizes it then displays it.
   cout << "\nTest Case 4\n";
   testAngle.setDegrees(1081);
   // use asserts to check that the angle has been normalized, the value
   // is between 0 and 2Pi.
   assert(0 <= testAngle.getRadians());
   assert((2 * M_PI) >= testAngle.getRadians());
   //Output: 1 Degrees
   testAngle.display();

   // test case 5: Input: 1081 degrees, changes an angle from degrees to
   // radians, updates member variable of the Angle class, displays it.
   cout << "\nTest Case 5\n";
   testAngle.setDegrees(180);
   //Output: 180 Degrees and Pi
   testAngle.display();
   // we practiced using an assert to run a test case 
   assert(M_PI == testAngle.getRadians());
 

   // testing that radians are correct.
   cout << "\tThis is in radians: " << testAngle.getRadians()
        << endl;

   //test case 6: copy constructor
   //Input: create a copy constructor

   //test case 7: constructor with degrees as a parameter 
   //Input: creating a Angle that is given 180 degrees as a parameter

   
}
