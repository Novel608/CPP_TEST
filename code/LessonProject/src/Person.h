/*
 * Person.h
 *
 *  Created on: 2014Äê11ÔÂ6ÈÕ
 *      Author: Novel
 */

#ifndef PERSON_H_
#define PERSON_H_

namespace feicui {

class Person {
private :
	int age;
public:
	void setAge(int age);
	int getAge();
	Person(int age);
	virtual ~Person();
	virtual void eat()=0;
};

} /* namespace feicui */

#endif /* PERSON_H_ */
