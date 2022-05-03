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
   // test case 1: Input: Pi
   cout << "\nTest Case 1\n";
   Angle testAngle;
   testAngle.setRadians(M_PI);
   //Output: 180 Degrees
   testAngle.display();

   // test case 2: Input: 270 degrees
   cout << "\nTest Case 2\n";
   testAngle.setDegrees(270);
   //Output: 270 Degrees
   testAngle.display();

   // test case 3: Input: 5 Pi
   cout << "\nTest Case 3\n";
   testAngle.setRadians(M_PI * 5);
   //Output: 180 Degrees
   testAngle.display();

   // test case 4: Input: 1081 degrees
   cout << "\nTest Case 4\n";
   testAngle.setDegrees(1081);
   //Output: 1 Degrees
   testAngle.display();

   // test case 5: Input: 1081 degrees
   cout << "\nTest Case 5\n";
   testAngle.setDegrees(180);
   //Output: 180 Degrees and Pi
   testAngle.display();
   assert(M_PI == testAngle.getRadians());
   cout << "\tThis is in radians: " << testAngle.getRadians();


   
}
