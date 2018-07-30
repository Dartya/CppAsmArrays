//директивы препроцессора
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

extern "C" //определение asm-процедуры в —++; операци€ указани€ прототипа
{
	void printMas();
}

int main() // главна€ функци€
{
	setlocale(LC_CTYPE, "Russian");
	printf("ƒирективой задан массив mas[15] = { 8, 23, -10, 3, 4, -7, 43, 56, 2, 3, 45, 67, 10, -5, -23 } .\n");
	printf("Ёлементы массива, удовлетвор€ющие условию задачи: \n \n");
	printMas();	//вызов asm-процедуры
	cout << endl;
	system("pause");
}