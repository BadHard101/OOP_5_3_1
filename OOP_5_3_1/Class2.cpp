#include "Class1.h"
#include "Class2.h"
#include <iostream>
using namespace std;
// ����������� �����������
Class2::Class2(int a1, int a2, int a3, int a4) : Class1(a1, a2, a3, a4) {}
int Class2::get_count(int x) {
	// ������ ����������, ��� ��� 2�� �����
	cout << "\nClass 2";
	// ������ ������ 2�� �������
	return a1 * x + a2 * x * x;
}