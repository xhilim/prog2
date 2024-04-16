#include "Point.h"


Point::Point(int j, int i, unsigned char red, unsigned char green, unsigned char blue)
	: J(j), I(i), mycolor({ red, green, blue })

{
/*	J = j;
	I = i;
	mycolor.r = red;
	mycolor.g = green;
	mycolor.b = blue;
	*/
}

Point::~Point()
{
	cout << "kasuje";
	licznik--;
}

ostream & operator <<(ostream& s, Point& p) {
	s << endl << p.I << " " << endl;
	return s;
}

bool Point::operator ==(const Point& p)
{
	return((this->I = p.I) && (this->J = p.J) && (this->mycolor.r = p.mycolor.r) && (this->mycolor.g = p.mycolor.g) && (this->mycolor.b = p.mycolor.b));
}

int Point::licznik = 0;