#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//点和圆的关系


////点类
//class Point {
//public:
//	//设置x
//	void setX(int x) {
//		m_X = x;
//	}
//	//获取x
//	int getX() {
//		return m_X;
//	}
//	//设置y
//	void setY(int y) {
//		m_X = y;
//	}
//	//获取y
//	int getY() {
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};


////园类
//class Circle {
//public:
////设置半径
//	void setR(int r) {
//		m_R = r;
//	}
//	//获取半径
//	int getR() {
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	//获取圆心
//	Point getCenter() {
//		return m_Center;
//	}
//
//private:
//	//半径
//	int m_R;
//	//圆心
//	//在类中可以让另一个类，作为本类中的成员
//	Point m_Center;
//};

//判断点和园的关系
void isInCircle(Circle& c, Point& p) {
	//计算两点之间的距离  平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	
	// 计算半径的平方
	int rDistance = c.getR() * c.getR();

	//判断关系
	if (distance == rDistance) {
		cout << "点在圆上";
}
	else if(distance>rDistance)
	{
		cout << "点在园外" << endl;
	}
	else {
		cout << "点在园内" << endl;
	}
}

int main() {
	//创建一个园
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(10);
	c.setCenter(center);

	//创建一个点
	Point p;
	p.setX(10);
	p.setY(10);
	//判断关系
	isInCircle(c, p);
}