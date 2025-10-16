#include <iostream>
#include <Windows.h>
#include <MyAngleLibrary.h>
#include <sstream>
using namespace AngleLibrary;

//#include "Angle.h"
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MyAngle d(0, 0); //Викилик конструктора з параметрами
	d.Display();
	MyAngle a1; //конструктор за замовчуванням
	MyAngle a2; //конструктор за замовчуванням

	MyAngle b(45, 30.5f); //виклик конструктора з параметрами
	b.Display();

	MyAngle c(b); //виклик конструктора копіювання
	c.Display();

	cout << "ПЕрший кут:" << endl;
	a1.Read(); //введення першого кута
	cout << "Другий кут:" << endl;
	a2.Read(); // введення другого кута

	float inc, dec; //

	//Виведення кутів
	cout << "--- Перший кут: ---" << endl;
	a1.Display();
	a1.ReadIncDec(inc, dec); // читаємо на скільки збільшити/зменшити

	cout << "Після збільшення: " << a1.Increment(inc) << endl;
	cout << "Після зменшення: " << a1.Decrement(inc) << endl;

	cout << "--- Другий кут: ---" << endl;
	a2.Display();
	a2.ReadIncDec(inc, dec); // читаємо на скільки збільшити/зменшити
	cout << "Другий кут після збільшення на " << inc << ": " << a2.Increment(inc) << " градусів" << endl;
	cout << "Другий кут після зменшення на " << dec << ": " << a2.Decrement(dec) << " градусів" << endl;

	cout << "Порівняння: ";
	cout << a1.toString() << " " << a1.Comparison(a2) << " " << a2.toString() << endl;
	system("pause");
	system("ping gmail.com");
}