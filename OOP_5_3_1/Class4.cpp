#include "Class3.h"
#include "Class4.h"
#include <iostream>
using namespace std;
// ����������� �����������
Class4::Class4(int a1, int a2, int a3, int a4) : Class3(a1, a2, a3, a4) {}
int Class4::get_count(int x) {
	// ������ ����������, ��� ��� 4�� �����
	cout << "\nClass 4";
	// ������ ������ 4�� �������
	return a1 * x + a2 * x * x + a3 * x * x * x + a4 * x * x * x * x;
}