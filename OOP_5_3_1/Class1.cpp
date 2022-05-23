#include "Class1.h"
#include <iostream>
using namespace std;

Class1::Class1(int a1, int a2, int a3, int a4) {
	// присваиваю свойствам класса значения из параметров
	this->a1 = a1;
	this->a2 = a2;
	this->a3 = a3;
	this->a4 = a4;
}
int Class1::get_count(int x) {
	// вывожу информацию, что это 1ый класс
	cout << "\nClass 1";
	// считаю пример 1ой степени
	return a1 * x;
}