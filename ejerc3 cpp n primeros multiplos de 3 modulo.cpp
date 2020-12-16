/*
Una empresa de software tiene planificado comprar programas para el desarrollo de
aplicaciones móviles. El costo es variable según el fabricante elegido. También deberá
elegir el tipo de programa y si es Lenguaje de Programación debe elegir el dispositivo
(Celulares, Tablas y Otros)
*/
#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int ingresenum()

{
	int num;
	cout << "ingrese numero: "; cin >> num;
	while (num <= 0)
	{
		cout << "ingrese numero: "; cin >> num;
	}
	return num;

}


void generamultiplos(int n)


{
	int i = 1;
		do
	{
		if(i %3==0)
		cout << i << "\t";
		i++;
	}
	while (i<=n);
}
int main()
{
	int n;
	n = ingresenum();
	cout << "la serie: ";
	generamultiplos(n);
	_getch();
}
