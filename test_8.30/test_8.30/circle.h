#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class circle
{
private:
	int m_r;
	point m_center;//�����п�������һ������Ϊ�����ĳ�Ա
public:
	void setr(int r);

	int getr();

	void setcenter(point center);

	point getcenter();
};