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

	MyAngle d(0, 0); //������� ������������ � �����������
	d.Display();
	MyAngle a1; //����������� �� �������������
	MyAngle a2; //����������� �� �������������

	MyAngle b(45, 30.5f); //������ ������������ � �����������
	b.Display();

	MyAngle c(b); //������ ������������ ���������
	c.Display();

	cout << "������ ���:" << endl;
	a1.Read(); //�������� ������� ����
	cout << "������ ���:" << endl;
	a2.Read(); // �������� ������� ����

	float inc, dec; //

	//��������� ����
	cout << "--- ������ ���: ---" << endl;
	a1.Display();
	a1.ReadIncDec(inc, dec); // ������ �� ������ ��������/��������

	cout << "ϳ��� ���������: " << a1.Increment(inc) << endl;
	cout << "ϳ��� ���������: " << a1.Decrement(inc) << endl;

	cout << "--- ������ ���: ---" << endl;
	a2.Display();
	a2.ReadIncDec(inc, dec); // ������ �� ������ ��������/��������
	cout << "������ ��� ���� ��������� �� " << inc << ": " << a2.Increment(inc) << " �������" << endl;
	cout << "������ ��� ���� ��������� �� " << dec << ": " << a2.Decrement(dec) << " �������" << endl;

	cout << "���������: ";
	cout << a1.toString() << " " << a1.Comparison(a2) << " " << a2.toString() << endl;
	system("pause");
	system("ping gmail.com");
}