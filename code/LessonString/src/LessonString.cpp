//============================================================================
// Name        : LessonString.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string str;
	str+="Hello";
	str+="   world";
	cout << str << endl; // prints !!!Hello World!!!

	stringstream s ;
	s <<  20 <<"sasa";
	cout <<s.str();

	return 0;
}
