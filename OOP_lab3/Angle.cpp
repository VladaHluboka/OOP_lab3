#include "Angle.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

void Angle::Read()
{
	cout << "Градуси: ";
	cin >> first; // введення градусів
	cout << "Хвилини: ";
	cin >> second; // введення хвилин
}

void Angle::Display()const
{
	//cout << "Кут: " << first << " degrees " << second << " minutes" << endl;
	cout << "Радіан кута: " << Radians() << endl;
	cout << "Градус кута: " << Angle_() << endl;
	cout << "Діапазон 0-360: " << Diapason() << endl; 
	cout << "Sin: " << Sin() << endl;
}

void Angle::SimpleDisplay() const
{
	cout << Diapason() << endl;
}

float Angle::Radians()const
{
	return ((first + second / 60) * 3.14) / 180; // формула переведення градусів у радіани
}

float Angle::Angle_()const
{
	return first + second / 60; // формула переведення хвилин у градуси
}

float Angle::Diapason()const
{
	if (Angle_() > 360)
		return Angle_() - 360;
	else if (Angle_() < 0)
		return Angle_() + 360;
	return Angle_();
}

Angle Angle::operator+(float inc) const
{
	float Increment = Diapason() + inc; // збільшення кута
	return Angle((int)Increment, (Increment - (int)Increment) * 60);
}

Angle Angle::operator-(float dec) const
{
	float Decrement = Diapason() - dec; // зменшення кута
	return Angle((int)Decrement, (Decrement - (int)Decrement) * 60);
}

float Angle::Sin()const
{
	return sin(Radians()); // синус кута
}

char Angle::Comparison(const Angle& other) // порівняння
{
	float a1 = Diapason();
	float a2 = other.Diapason();

	if (a1 > a2)
		return '>';
	else if (a1 < a2)
		return '<';
	else return '=';
}

string Angle::toString() const // рядкове представлення
{
	ostringstream out;
	out << Angle_();
	return out.str();
}

Angle Angle::operator+(const Angle& other) const // операція перевантаження додавання
{
	float sum = Diapason() + other.Diapason();
	return Angle((int)sum, (sum - (int)sum) * 60);
}

