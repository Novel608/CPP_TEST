//============================================================================
// Name        : LessonProject.cpp
// Author      : Novel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Man.h"
#include <stdio.h>

using namespace std;
using namespace feicui;

class Point{
private :
	int x,y;
public :
	Point(int x,int y){
		this->x= x;
		this->y= y;
	}
	int getX(){
		return this->x;
	}

	void add(Point point){
		add(point.getX(),point.getY());
	}
	void add(int x,int y){
		this->x+=x;
		this->y+=y;
//		int sum = x+y;
//		cout << sum << "\n";
	}
	void operator+=(Point p){
		add(p);
	}

	int getY(){
		return this->y;
	}
};

int main() {
//	Point p(12,12);
//	p+=Point(23,25);
//	cout << p.getY();
//	Point *p = new Point(12,12);
//	(*p)+=Point(23,23);
//	cout << p->getY();
	Man *m = new Man(23);
	m->eat();
//	int num = m->getAge();
//	m->setAge(40);
//	num = m->getAge();
//	cout << num;
//	Person *p = new Person(20);
//	p->setAge(30);
//	int num = p->getAge();
//	cout << num << "\n";
	return 0;
}
