#pragma once
#include <string>
class Angle
{
private:
	int first; // �������
	float second; // �������
public:
	Angle() : first(0), second(0.0f) {} // ����������� �� �������������
	Angle(int d, float m) : first(d), second(m) {} // ����������� � �����������
	Angle(const Angle& other) : first(other.first), second(other.second) {} // ����������� ���������
	void Read(); // ��������
	void Display() const; // ���������
	float Radians() const; // ������
	float Angle_() const; // ���
	float Diapason() const; // ������� 0-360
	float Increment(float inc) const; // ���������
	float Decrement(float dec) const; // ���������
	float Sin() const; // �����
	char Comparison(const Angle& other) const; // ���������
	std::string toString() const; // ������� �������������

};

