// function array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

void reverse(int *mas, int *mas1)
{
	for (int i = 0; i < 10; i++)
		mas1[i] = mas[10 - i];
	cout << "new array:";
	for (int i = 0; i < 10; i++)
		cout << " " << mas1[i];
	cout << endl;
}

void increase(int *mas, int *mas1)
{
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				mas1[1] = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = mas1[1];
			}
		}
	}
	cout << "new array:";
	for (int i = 0; i < 10; i++)
		cout << " " << mas[i];
	cout << endl;
}

void decrease(int *mas, int *mas1)
{
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (mas[j] < mas[j + 1])
			{
				mas1[1] = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = mas1[1];
			}
		}
	}
	cout << "new array:";
	for (int i = 0; i < 10; i++)
		cout << " " << mas[i];
	cout << endl;
}


int main()
{
	int original[10];
	int processed[10];
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "enter value of array number " << i << endl;
		cin >> original[i];
	}

	

	void(*fArray[3])(int*, int*) = { reverse, increase, decrease };


	for (int i = 1; i < 10; i++)
	{
		sum = sum + original[i];
	}
	if (original[1] == sum)
	{
		fArray[0](original, processed);
	}
	else if (original[1] > sum)
	{
		fArray[1](original, processed);
	}
	else
	{
		fArray[2](original, processed);
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
