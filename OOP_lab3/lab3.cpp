#include <iostream>
#include <windows.h>
#include "Angle.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Angle d; //виклик конструктора з параметрами
	d.Display();
	Angle a1;
	Angle a2;

	Angle b(45, 30.5); // виклик конструктора з параметрами
	b.Display();

	Angle c(b); // виклик конструктора копіювання
	c.Display();

	cout << "Перший кут:" << endl;
	a1.Read(); // введення першого кута
	cout << "Другий кут:" << endl;
	a2.Read(); // введення другого кута
	cout << endl;

	float incValue, decValue;
	cout << "Збільшення на: ";
	cin >> incValue;
	cout << "Зменшення на: ";
	cin >> decValue;

	// виведення кутів
	cout << "--- Перший кут ---" << endl;
	a1.Display();
	cout << "Перший кут пясля збільшення на " << incValue << ": " << a1.Increment(incValue) << endl;
	cout << "Перший кут пясля зменшення на " << decValue << ": " << a1.Decrement(decValue) << endl;

	cout << "--- Другий кут ---" << endl;
	a2.Display();
	cout << "Другий кут пясля збільшення на " << incValue << ": " << a2.Increment(incValue) << endl;
	cout << "Другий кут пясля зменшення на " << decValue << ": " << a2.Decrement(decValue) << endl;

	cout << "Порівняння: ";
	cout << a1.toString() << " " << a1.Comparison(a2) << " " << a2.toString() << endl;
	system("pause");
	system("ping gmail.com");
}