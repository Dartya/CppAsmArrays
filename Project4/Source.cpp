//��������� �������������
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

extern "C" //����������� asm-��������� � �++; �������� �������� ���������
{
	void printMas();
}

int main() // ������� �������
{
	setlocale(LC_CTYPE, "Russian");
	printf("���������� ����� ������ mas[15] = { 8, 23, -10, 3, 4, -7, 43, 56, 2, 3, 45, 67, 10, -5, -23 } .\n");
	printf("�������� �������, ��������������� ������� ������: \n \n");
	printMas();	//����� asm-���������
	cout << endl;
	system("pause");
}