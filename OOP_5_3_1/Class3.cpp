#include "Class2.h"
#include "Class3.h"
#include <iostream>
using namespace std;
// ����������� �����������
Class3::Class3(int a1, int a2, int a3, int a4) : Class2(a1, a2, a3, a4) {}
int Class3::get_count(int x) {
	// ������ ����������, ��� ��� 3�� �����
	cout << "\nClass 3";
	// ������ ������ 3e� �������
	return a1 * x + a2 * x * x + a3 * x * x * x;
}
