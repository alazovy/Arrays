﻿#include<iostream>

using namespace std;
#define tab "\t";

#define UNIQUE_1
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//Заполняем массив случайным числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;

	//вывод отсортированного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
