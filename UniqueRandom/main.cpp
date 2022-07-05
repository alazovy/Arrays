#include<iostream>

using namespace std;
#define tab "\t";

#define UNIQUE_1
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

#ifdef UNIQUE_1

     //заполнения массива случайными числами
	for (int i = 0; i < n; i++)
	{
		bool unique; // флаг уникальности
		do
		{
			arr[i] = rand() % n;
			unique = true; // Предполагаем что сгенерировалось уникальное случайное 
			//число, но это нужно проверить
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);


		//вывод массива на экран
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
#endif

	/*	for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % n;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					i--;
					break;
				}
			}
		}

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;*/
}