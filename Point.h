//Point.h
#pragma once
#include <iostream>
#include <string>
#include "Object.h"
using namespace std;
class Point : public Object {
	double x, y;

public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	Point();
	Point(double, double);
	Point(const Point&);
	double Distance(Point p);
	operator string() const;
	Point operator ++();
	Point operator --();
	Point operator ++(int);
	Point operator --(int);
	friend ostream& operator <<(ostream&, const Point&);
	friend istream& operator >>(istream&, Point&);

};
