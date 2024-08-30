#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class circle
{
private:
	int m_r;
	point m_center;//在类中可以让另一个类作为本来的成员
public:
	void setr(int r);

	int getr();

	void setcenter(point center);

	point getcenter();
};