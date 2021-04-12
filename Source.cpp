//Source.cpp
#include "Point.h"
int main()
{
	Point p;
	cin >> p;
	Point p1(p);
	Point p2(4, 6);
	Object o;
	cout << "Number of objects = " << Object::count() << endl;

}
