#pragma once


/***************************************************
* Angle Class
* Stores an angle in radians as an attribute, contains
* methods to change the angle between radians and
* degrees, display it in degrees, and normalizes it.
****************************************************/
class Angle
{
	Angle();

private:
	double angleRadians;

public:
	// return an angle in degrees
	double getDegrees() const;

	// return an angle in radians
	double getRadians() const;

	// update the angleRadians attribute
	void setDegrees(double newAngle);
	void setRadians(double newAngle);

	// display the angle in degrees
	void display() const;

private:
	// change angle from radians to degrees
	double convertToDegrees(double radians) const;

	// change the angle from degrees to radians
	double convertToRadians(double degrees) const;

	// formula to make sure the angle is always 
	// between 0 and 2Pi
	double normalize(double angle) const;
};

