#pragma once
#include<iostream>
#include"point.h"
using namespace std;
//԰��
 class Circle {
public:
	//���ð뾶
	void setR(int r);
	//��ȡ�뾶
	int getR();
	//����Բ��
	void setCenter(Point center);
	
	//��ȡԲ��
	Point getCenter();
private:
	//�뾶
	int m_R;
	//Բ��
	//�����п�������һ���࣬��Ϊ�����еĳ�Ա
	Point m_Center;
};



