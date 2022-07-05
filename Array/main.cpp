#include<iostream>
using namespace std;

#define tab "\t";


void main()
{

	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//Заполнение массива случайными числами
	int minRand, maxRand;
	do
	{
		cout << "Введите минимально случайное число:"; cin >> minRand;
		cout << "Введите ммаксимально случайное число:"; cin >> maxRand;
		if (minRand > maxRand)cout << "Error: значения некорректны, попробуйте ещё раз";
	} while (minRand >= maxRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand)+minRand;

	}
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
