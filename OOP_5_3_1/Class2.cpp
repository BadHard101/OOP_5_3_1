#include "Class1.h"
#include "Class2.h"
#include <iostream>
using namespace std;
// конструктор наследуется
Class2::Class2(int a1, int a2, int a3, int a4) : Class1(a1, a2, a3, a4) {}
int Class2::get_count(int x) {
	// вывожу информацию, что это 2ой класс
	cout << "\nClass 2";
	// считаю пример 2ой степени
	return a1 * x + a2 * x * x;
}