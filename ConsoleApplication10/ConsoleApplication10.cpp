// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <cassert>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	//1:

	/*int a;
	cout << "Введите число: ";
	cin >> a;
	for (int i{ a }; i < 500; ++i)
	{
		a += i;
	}
	cout << "\nСумма: " << a;*/

	//2:

	/*int x, y, z;
	cout << "Введите х: ";
	cin >> x;
	cout << "\nВведите y: ";
	cin >> y;
	z = x;
	for (int i{ 1 }; i < y; i++)
	{
		z *= x;
	}
	cout << "\n" << z;*/

	//3:

	/*int z{ 0 };
	for (int i{ 0 }; i < 1000; i++)
	{
		z += i;
	}
	cout << z / 1000;*/

	//4:

	/*int a, z;
	do
	{
		cout << "\nВведите число: ";
		cin >> a;
	} while (a > 20 || a < 1);
	for (int i{ a }; i <= 20; i++)
	{
		a *= i;
	}
	cout << "\nПроизведение: " << a;*/

	//5:

	/*int a;
	cout << "Введите число: ";
	cin >> a;
	for (int i{ 1 }; i <= 10; i++)
	{
		cout << "\n" << a << " * " << i << " = " << a * i;
	}*/

	//6:

	/*int a;
	cout << "Введите число: ";
	cin >> a;
	cout << endl;
	for (int i{ 0 }; i <= a; i++)
	{
		cout << i << " ";
	}*/

	//7:

	/*int a, b, c, d;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "\nВведите второе число: ";
	cin >> b;
	cout << endl;
	if (a < b)
	{
		c = a;
		d = b;
	}
	else
	{
		c = b;
		d = a;
	}

	for (int i{ c }; i <= d; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	for (int i{ c }; i <= d; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;

	for (int i{ c }; i <= d; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;

	for (int i{ c }; i <= d; i++)
	{
		if (i % 7 == 0)
		{
			cout << i << " ";
		}
	}*/

	//8:

	/*int a, b, c, d;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "\nВведите второе число: ";
	cin >> b;
	cout << endl;
	if (a < b)
	{
		c = a;
		d = b;
	}
	else
	{
		c = b;
		d = a;
	}
	for (int i{ c }; i < d; i++)
	{
		a += i;
	}
	cout << "\nСумма: " << a;*/

	//9:

   /* int a, b{ 0 };
    do
	{
		cout << "\nВведите число: ";
		cin >> a;
		b += a;
	} while (a != 0);
	cout << "\nСумма: " << b;*/

}