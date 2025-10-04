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
	cout << "Перший кут після збільшення на " << incValue << ": ";
	(a1 + incValue).SimpleDisplay();

	cout << "Перший кут після зменшення на " << decValue << ": ";
	(a1 - decValue).SimpleDisplay();

	cout << "--- Другий кут ---" << endl;
	a2.Display();

	cout << "Другий кут після збільшення на " << incValue << ": ";
	(a2 + incValue).SimpleDisplay();

	cout << "Другий кут після зменшення на " << decValue << ": ";
	(a2 - decValue).SimpleDisplay();

	//порівняння кутів
	cout << "\tПорівняння: ";
	cout << a1.toString() << " " << a1.Comparison(a2) << " " << a2.toString() << endl;

	Angle sum = a1 + a2;
	cout << "Додавання кутів: ";
	sum.SimpleDisplay();


	system("pause");
	system("ping gmail.com");
}