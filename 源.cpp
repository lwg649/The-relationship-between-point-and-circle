#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//���Բ�Ĺ�ϵ


////����
//class Point {
//public:
//	//����x
//	void setX(int x) {
//		m_X = x;
//	}
//	//��ȡx
//	int getX() {
//		return m_X;
//	}
//	//����y
//	void setY(int y) {
//		m_X = y;
//	}
//	//��ȡy
//	int getY() {
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};


////԰��
//class Circle {
//public:
////���ð뾶
//	void setR(int r) {
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR() {
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter() {
//		return m_Center;
//	}
//
//private:
//	//�뾶
//	int m_R;
//	//Բ��
//	//�����п�������һ���࣬��Ϊ�����еĳ�Ա
//	Point m_Center;
//};

//�жϵ��԰�Ĺ�ϵ
void isInCircle(Circle& c, Point& p) {
	//��������֮��ľ���  ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	
	// ����뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rDistance) {
		cout << "����Բ��";
}
	else if(distance>rDistance)
	{
		cout << "����԰��" << endl;
	}
	else {
		cout << "����԰��" << endl;
	}
}

int main() {
	//����һ��԰
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(10);
	c.setCenter(center);

	//����һ����
	Point p;
	p.setX(10);
	p.setY(10);
	//�жϹ�ϵ
	isInCircle(c, p);
}