#include "Angle.h"
#define _USE_MATH_DEFINES //Pi and Sqrt

#include <cmath> // Pi and Sqrt
#include <math.h> // Floor
#include <iostream> // cout and cin

using namespace std;

/***************************************************
*
*
*
****************************************************/


// Public
	
// return the angle in degrees
double Angle::getDegrees() const
{
	return convertToDegrees(angleRadians);
}

// return the angle in radians
double Angle::getRadians() const
{
	return angleRadians;
}

// update the attribute with the passed parameter
void Angle::setDegrees(double newAngle)
{
	this->angleRadians = normalize(convertToRadians(newAngle));
}

// update the attribute with the passed parameter
void Angle::setRadians(double newAngle)
{
	this->angleRadians = normalize(newAngle);
}

// display the value, in degrees, to 1 decimal place of accuracy
void Angle::display() const
{
	cout << "\tThe current angle is " << getDegrees() << endl;
}


// Private

// convert radians into degrees
double Angle::convertToDegrees(double radians) const
{
	return (radians / (2.00 * M_PI)) * 360;
}

// convert degrees into radians
double Angle::convertToRadians(double degrees) const
{
	return (degrees / 360.00) * (2.00 * M_PI);
}

// take a value which is in radians and reduce it to between 0 and 2Pi.
double Angle::normalize(double angle) const
{
	// an if statement could be used, but it might more costly than 
	// just performing the math every time
	return angle - floor(angle / (2 * M_PI)) * (2 * M_PI);
}

