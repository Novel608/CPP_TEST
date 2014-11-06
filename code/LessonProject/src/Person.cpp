/*
 * Person.cpp
 *
 *  Created on: 2014Äê11ÔÂ6ÈÕ
 *      Author: Novel
 */

#include "Person.h"
#include <stdio.h>
#include <iostream>
using namespace std;

namespace feicui {

Person::Person(int age) {
	this->age = age;
	printf("Create Person\n");
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

int Person::getAge() {
	return this->age;
}

void Person::setAge(int age) {
	this->age = age;
	int num = this->age;
	string str = "";
	str+=this->age;
	printf(str.c_str());
//	cout<<str;
}

} /* namespace feicui */
