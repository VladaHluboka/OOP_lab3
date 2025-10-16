#include "Angle.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

void Angle::Read()
{
	cout << "Градуси: ";
	cin >> first; // введення градусів
	cout << "Хвлини: ";
	cin >> second; // введення хвилин
}

void Angle::Display() const
{
	cout << "Кут: " << first << " degrees " << second << " minutes" << endl;
	cout << "Радіан кута: " << Radians() << endl;
	cout << "ГРадус кут: " << Angle_() << endl;
	cout << "Діапазон 0-360: " << Diapason() << endl;
	cout << "sin: " << Sin() << endl;
}

float Angle::Radians() const
{
	return ((first + second / 60) * 3.14) / 180; // формула переведення градусів у радіани
}

float Angle::Angle_() const
{
	return first + second / 60; // формула переведення хвилин у градуси
}

float Angle::Diapason() const
{
	if (Angle_() > 360)
		return Angle_() - 360;
	else if (Angle_() < 0)
		return Angle_() + 360;
	return Angle_();
}

float Angle::Increment(float inc) const
{
	return Diapason() + inc; // збільшення кута
}

float Angle::Decrement(float dec) const
{
	return Diapason() - dec; // зменшення кута
}

float Angle::Sin() const
{
	return sin(Radians()); // синус кута
}

char Angle::Comparison(const Angle& other) const //порівняння
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

