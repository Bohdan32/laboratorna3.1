// Lab_03_1.cpp
// ����� ������
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 4

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	if (x <= 4)
		B = exp(log(2+2*x)+2*x);
	if (4 < x && x <= 7)
		B = (1 / tan((1+x)/9))+ 8 * x;
	if (x > 7)
		B = 1 - 7 * x + pow(x,2) - 2 * pow(x, 3);
	y = 1 + x + B;
	cout << endl;
	cout << "y = " << y << endl;

	if (x <= 4)
		B = exp(log(2 + 2 * x) + 2 * x);
	else if(x > 7)
		B = 1 - 7 * x + pow(x, 2) - 2 * pow(x, 3);
	else
		B = (1 / tan((1 + x) / 9)) + 8 * x;
	y = 1 + x + B;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}