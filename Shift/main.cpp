#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//����� ��������� ������� �� �����:
	cout << arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� �������:
	int shifts;
	cout << "������� ���������� �������: "; cin >> shifts;
	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[9];
		for (int i = n-1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;

		//����� ���������� ������� �� �����:
		system("CLS");
		//������� system() ��������� ����� ������� ��������� ������
		//������� CLS - Clear Screen ������� �����
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
		Sleep(400);//������� Sleep() ���������������� ���������� ��������� �� �������� ����� �����������.
	}
}