#include "Angle.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

void Angle::Read()
{
	cout << "�������: ";
	cin >> first; // �������� �������
	cout << "������: ";
	cin >> second; // �������� ������
}

void Angle::Display() const
{
	cout << "���: " << first << " degrees " << second << " minutes" << endl;
	cout << "����� ����: " << Radians() << endl;
	cout << "������ ���: " << Angle_() << endl;
	cout << "ĳ������ 0-360: " << Diapason() << endl;
	cout << "sin: " << Sin() << endl;
}

float Angle::Radians() const
{
	return ((first + second / 60) * 3.14) / 180; // ������� ����������� ������� � ������
}

float Angle::Angle_() const
{
	return first + second / 60; // ������� ����������� ������ � �������
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
	return Diapason() + inc; // ��������� ����
}

float Angle::Decrement(float dec) const
{
	return Diapason() - dec; // ��������� ����
}

float Angle::Sin() const
{
	return sin(Radians()); // ����� ����
}

char Angle::Comparison(const Angle& other) const //���������
{
	float a1 = Diapason();
	float a2 = other.Diapason();

	if (a1 > a2)
		return '>';
	else if (a1 < a2)
		return '<';
	else return '=';
}

string Angle::toString() const // ������� �������������
{
	ostringstream out;
	out << Angle_();
	return out.str();
}

