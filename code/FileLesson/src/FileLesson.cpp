//============================================================================
// Name        : FileLesson.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
//	ofstream of("d:\\data.txt");
//	of<<"Hello CPP\n";

	ifstream inf("d:\\data.txt");
	stringbuf sb;
	char c;
	inf >> &sb;
	cout << sb.str();

//	of.end;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
