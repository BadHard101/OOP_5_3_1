#ifndef CLASS_3_H
#define CLASS_3_H
#include <iostream>
#include "Class2.h"
class Class3 : public Class2 {
public:
	Class3(int a1, int a2, int a3, int a4);
	virtual int get_count(int x);
};
#endif