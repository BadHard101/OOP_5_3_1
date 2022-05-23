#ifndef CLASS_4_H
#define CLASS_4_H
#include <iostream>
#include "Class3.h"
class Class4 : public Class3 {
public:
	Class4(int a1, int a2, int a3, int a4);
	virtual int get_count(int x);
};
#endif