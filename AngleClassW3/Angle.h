#pragma once


/***************************************************
* Angle Class
*
* Stores one angle as an attribute.
* It can convert between radians and degrees
****************************************************/
class Angle
{
private:
	double angleRadians;

public:
	//
	double getDegrees() const;
	double getRadians() const;
	//
	void setDegrees(double newAngle);
	void setRadians(double newAngle);
	//
	void display() const;

private:
	//
	double convertToDegrees(double radians) const;
	double convertToRadians(double degrees) const;
	//
	double normalize(double angle) const;
};

