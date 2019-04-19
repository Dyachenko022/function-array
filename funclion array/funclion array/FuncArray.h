#pragma once
#include <iostream>
#include <vector>
using namespace std;

#ifndef FUNCARRAY_H
#define FUNCARRAY_H
struct Array
{
	int original[10];
	int processed[10];

	void enterArray()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "enter value of array number " << i << endl;
			cin >> original[i];
		}
	}

	void reverse()
	{
		for (int i = 0; i < 10; i++)
			processed[i] = original[10 - i];
		for (int i = 0; i < 10; i++)
			cout << processed[i];
	}
	void increase()
	{
		for (int i = 0; i < 10 -1; i++) 
		{
			for (int j = 0; j < 10 - i - 1; j++) 
			{
				if (original[j] > original[j + 1]) 
				{
					processed[1] = original[j];
					original[j] = original[j + 1];
					original[j + 1] = processed[1];
				}
			}
		}
		cout << "new array:";
		for (int i = 0; i < 10; i++)
			cout << " " << original[i];
		cout << endl;
	}
	void decrease()
	{
		for (int i = 0; i < 10 - 1; i++)
		{
			for (int j = 0; j < 10 - i - 1; j++)
			{
				if (original[j] < original[j + 1])
				{
					processed[1] = original[j];
					original[j] = original[j + 1];
					original[j + 1] = processed[1];
				}
			}
		}
		cout << "new array:";
		for (int i = 0; i < 10; i++)
			cout << " " << original[i];
		cout << endl;
	}

};
#endif