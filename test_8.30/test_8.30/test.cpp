#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//#include<string>
//class student
//{
//public:
//	string m_name;
//	int m_id;
//	void show()
//	{
//		cout << "学生姓名：" << m_name << endl;
//		cout << "学生学号：" << m_id << endl;
//	}
//	void setname(string name)//给姓名赋值
//	{
//		m_name = name;
//	}
//};
//int main()
//{
//	student s1;
//	s1.m_name = "张三";
//	s1.m_id = 123456789;
//	s1.show();
//
//	student s2;
//	s2.setname("李四");
//	s2.m_id = 123456789;
//	s2.show();
//
//	system("pause");
//	return 0;
//}

//class C1
//{
//	int m_id;
//};
//struct C2
//{
//	int m_id;
//};
//int main()
//{
//	C1 c1;
//	c1.m_id = 100;//报错
//	C2 c2;
//	c2.m_id = 200;
//	system("pause");
//	return 0;
//}

//#include<string>
//class Person
//{
//public:
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	string getname()
//	{
//		return m_name;
//	}
//	int getage()
//	{
//		return m_age;
//	}
//	void setidol(string idol)
//	{
//		m_idol = idol;
//	}
//private://成员属性设置为私有
//	string m_name;//可读可写
//
//	int m_age=18;//只读
//
//	string m_idol;//只写
//};
//int main()
//{
//	Person p;
//	p.setname("张三");
//	cout << p.getname() << endl;
//	cout << p.getname() << endl;
//	p.setidol("张韶涵");
//	system("pause");
//	return 0;
//}

//#include<string>
//class Person
//{
//public:
//	void setage(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "年龄输入有误，赋值失败" << endl;
//			return;
//		}
//		m_age = age;
//	}
//	int getage()
//	{
//		return m_age;
//	}
//private://成员属性设置为私有
//	string m_name;//可读可写
//
//	int m_age = 18;//可读可写，必须在0-150之间
//
//	string m_idol;//只写
//};
//int main()
//{
//	Person p;
//
//	p.setage(160);
//	cout << "年龄:" << p.getage() << endl;//18
//	system("pause");
//	return 0;
//}


//class cube
//{
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//public:
//	void setL(int L)
//	{
//		m_L = L;
//	}
//	int getL()
//	{
//		return m_L;
//	}
//	void setW(int W)
//	{
//		m_W = W;
//	}
//	int getW()
//	{
//		return m_W;
//	}
//	void setH(int H)
//	{
//		m_H = H;
//	}
//	int getH()
//	{
//		return m_H;
//	}
//	int square()
//	{
//		return  2 * m_L * m_W + m_L * m_H * 2 + m_W * m_H * 2;
//	}
//	int tiji()
//	{
//		return m_L * m_W * m_H ;
//	}
//	bool issameByclass(cube& c)//传一个参数，因为这是一个成员函数，应该用一个已知的对象调用成员函数，然后传一个未知的立方体
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//			return true;
//		else
//			return false;
//	}
//};
//bool issame(cube &c1, cube &c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	cube c1;
//	c1.setL(10);
//	c1.setH(10);
//	c1.setW(10);
//	cout << "立方体面积：" << c1.square() << endl;
//	cout << "立方体体积：" << c1.tiji() << endl;
//
//	cube c2;
//	c2.setL(10);
//	c2.setH(10);
//	c2.setW(10);
//	bool s = issame(c1, c2);//全局函数判断两个立方体是否相同：传两个参数
//	if (s)
//		cout << "c1和c2是相等的" << endl;
//	else
//		cout << "c1和c2是不相等的" << endl;
//
//	s = c1.issameByclass(c2);//成员函数判断，传一个参数
//	if (s)
//		cout << "c1和c2是相等的" << endl;
//	else
//		cout << "c1和c2是不相等的" << endl;
//	system("pause");
//	return 0;
//}

//class point
//{
//private:
//	int m_x;
//	int m_y;
//public:
//	void setx(int x)
//	{
//		m_x = x;
//	}
//	int getx()
//	{
//		return m_x;
//	}
//	void sety(int y)
//	{
//		m_y = y;
//	}
//	int gety()
//	{
//		return m_y;
//	}
//};
//class circle
//{
//private:
//	int m_r;
//	point m_center;//在类中可以让另一个类作为本来的成员
//public:
//	void setr(int r)
//	{
//		m_r = r;
//	}
//	int getr()
//	{
//		return m_r;
//	}
//	void setcenter(point center)
//	{
//		m_center = center;
//	}
//	point getcenter()
//	{
//		return m_center;
//	}
//};
#include"circle.h"
#include"point.h"
void isIncircle(circle& c, point& p)
{
	int distance = (c.getcenter().getx() - p.getx())* (c.getcenter().getx() - p.getx()) + (c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	int rdistance = c.getr() * c.getr();

	if (distance == rdistance)
		cout << "点在圆上" << endl;
	else if (distance > rdistance)
		cout << "点在圆外" << endl;
	else
		cout << "点在圆内" << endl;
}
int main()
{
	circle c1;
	c1.setr(10);
	point p1;
	p1.setx(10);
	p1.sety(0);
	c1.setcenter(p1);

	point p2;
	p2.setx(10);
	p2.sety(9);
	isIncircle(c1, p2);
	system("pause");
	return 0;
}