#include <iostream>
#include <string>
#include "circle.h"
#include"point.h"
using namespace std;
//class Point {
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//
//	int m_X;
//	int m_Y;
//};
//class Circle {
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setCenter(Point Center)
//	{
//		m_Center = Center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;//ÀàµÄÇ¶Ì×
//};
void isInCircle(Circle& c, Point& p)
{
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rDistance = c.getR() * c.getR();
	if (distance == rDistance) {
		cout << "On the circle" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "Out of the Circle" << endl;
	}
	else cout << "In the circle" << endl;
}
int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	Point p;
	p.setX(10);
	p.setY(5);
	isInCircle(c, p);
	system("pause");
	return 0;
}