#ifndef CLASS_1_H
#define CLASS_1_H
#include <iostream>
class Class1 {
public:
	Class1(int a1, int a2, int a3, int a4);
	virtual int get_count(int x);
protected:
	int a1;
	int a2;
	int a3;
	int a4;
};
#endif