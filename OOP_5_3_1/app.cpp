#include <iostream>
#include "Class4.h"
using namespace std;
void app() {
	Class4* object;
	// �������� ����������� ����������,x, ����� ������ � ��������� ���������
		int a1, a2, a3, a4, x, number, result;
	cin >> a1 >> a2 >> a3 >> a4;
	object = new Class4(a1, a2, a3, a4);
	// ����� ������������
	cout << "a1 = " << a1 << " " << "a2 = " << a2 << " " << "a3 = "
		<< a3 << " " << "a4 = " << a4;
	// ������ ������������ �����, ������� ���������� ��� ����� 0
	while (true) {
		// ���� x � ������ ������
		cin >> x >> number;
		if (x == 0) break;

		// � ����������� �� ������ ������ ������� ������ ��� ����� ������
			if (number == 4) result = object->get_count(x);
			else if (number == 3) result = object->Class3::get_count(x);
			else if (number == 2) result = object->Class2::get_count(x);
			else if (number == 1) result = object->Class1::get_count(x);
		// ���� ����� ������, �� ������ �� �����
			else continue;
		// ������ ��������� ���������
		cout << " F( " << x << " ) = " << result;
	}
}