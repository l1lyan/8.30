#pragma once
#include<iostream>
using namespace std;

class point
{
private:
	int m_x;
	int m_y;
public:
	void setx(int x);//ֻ������
	int getx();
	void sety(int y);
	int gety();
};