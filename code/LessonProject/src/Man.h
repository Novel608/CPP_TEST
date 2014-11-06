/*
 * Man.h
 *
 *  Created on: 2014Äê11ÔÂ6ÈÕ
 *      Author: Novel
 */

#ifndef MAN_H_
#define MAN_H_
#include "Person.h"
#include <iostream>

using namespace std;

namespace feicui {

class Man:public Person {
public:
	Man(int age);
	virtual ~Man();
	virtual void eat(){
		cout << "eat"
				"";
	};
};

} /* namespace feicui */

#endif /* MAN_H_ */
