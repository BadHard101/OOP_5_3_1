#include <iostream>
#include "Class4.h"
using namespace std;
void app() {
	Class4* object;
	// объ€вл€ю коэффиценты многочлена,x, номер класса и результат выражени€
		int a1, a2, a3, a4, x, number, result;
	cin >> a1 >> a2 >> a3 >> a4;
	object = new Class4(a1, a2, a3, a4);
	// вывод коэффицентов
	cout << "a1 = " << a1 << " " << "a2 = " << a2 << " " << "a3 = "
		<< a3 << " " << "a4 = " << a4;
	// начало бесконечного цикла, который закончитс€ при вводе 0
	while (true) {
		// ввод x и номера класса
		cin >> x >> number;
		if (x == 0) break;

		// в зависимости от номерп класса вызываю метода дл€ этого класса
			if (number == 4) result = object->get_count(x);
			else if (number == 3) result = object->Class3::get_count(x);
			else if (number == 2) result = object->Class2::get_count(x);
			else if (number == 1) result = object->Class1::get_count(x);
		// если номер другой, то ничего не делаю
			else continue;
		// вывожу результат выражени€
		cout << " F( " << x << " ) = " << result;
	}
}