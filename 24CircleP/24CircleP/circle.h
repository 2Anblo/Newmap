#pragma once
#include<iostream>
#include "point.h"
using namespace std;
class Circle {
public:
	void setR(int r);
	int getR();
	void setCenter(Point Center);
	Point getCenter();
private:
	int m_R;
	Point m_Center;//���Ƕ��
};