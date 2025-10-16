#pragma once
#include <iostream>
#include <string>

namespace AngleLibrary {
	class MyAngle {
	private:
		int first; // degrees
		float second; // minutes
	public:
		MyAngle() : first(0), second(0.0f) {} // конструктор за замовчуванням
		MyAngle(int d, float m) : first(d), second(m) {} // конструктор з параметрами
		MyAngle(const MyAngle& other) : first(other.first), second(other.second) {} // конструктор копіювання
		void Read();
		void Display() const;
		void ReadIncDec(float& inc, float& dec);
		// return Radians
		double Radians() const;
		// return Angle_
		double Angle_() const;
		// rerutn Dianason
		double Diapason() const;
		// return Increment
		double Increment(float inc) const;
		// return Decrement
		double Decrement(float dec) const;
		// rerutn Sin
		double Sin() const;
		// return Comparison
		char Comparison(const MyAngle& other);
		std::string toString() const; // рядкове представлення
	};
}
