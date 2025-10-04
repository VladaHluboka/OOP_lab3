#pragma once
#include <string>
class Angle
{
private:
	int first; // градуси
	float second; // хвилини
public:
	Angle() : first(0), second(0.0f) {} // конструктор за замовчуванням
	Angle(int d, float m) : first(d), second(m) {}// конструктор з параметрами
	Angle(const Angle& other) : first(other.first), second(other.second) {} // конструктор копіювання
	void Read(); // введення
	void Display() const; // виведення
	void SimpleDisplay() const; // просте виведення
	float Radians()const; // радіани
	float Angle_()const; // кут
	float Diapason()const; // діапазон 0-360
	Angle operator+(float inc) const; // збільшення
	Angle operator-(float dec) const; // зменшення
	float Sin()const; // синус
	char Comparison(const Angle& other); // порівняння
	std::string toString() const; // рядкове представлення
	Angle operator+(const Angle& other) const; // додавання

	//Angle& operator=(const Angle& other) // оператор присвоєння
	//{
	//	if (this == &other)
	//		return *this;
	//	first = other.first;
	//	second = other.second;
	//	return *this;
	//}

	
};
