#ifndef CLASS_2_H
#define CLASS_2_H
#include <iostream>
#include "Class1.h"
class Class2 : public Class1 {
public:
	Class2(int a1, int a2, int a3, int a4);
	virtual int get_count(int x);
};
#endif