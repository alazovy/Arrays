#include<iostream>
using namespace std;

//#define DEC_2_BIN

void main()
{
	setlocale(LC_ALL, "");
	/*for (;;)
{
	cout << "Hello Numerics";
}*/

//cout << (int)'A' << endl;
	//for (int i = 0; i < 256; i++)cout << i << "\t" << char(i) << endl;

	int decimal;	//���������� ����� ��������� �������������
	cout << "������� ���������� �����: "; cin >> decimal;

#ifdef DEC_2_BIN
	const int MAX_SIZE = 32;	
	bool bin[MAX_SIZE] = {};	

	int i = 0;	//������� ��������
	/*while (decimal)
	{
		bin[i] = decimal % 2;	//�������� ������� ������ ��������� �����
		decimal /= 2;	//������� ���������� ������ ��������� �����
		i++;
	}*/
	//for (; decimal; bin[i] = decimal % 2, decimal /= 2, i++);
	

	for (; decimal; i++, decimal /= 2)bin[i] = decimal % 2;
	//Comma operator
		//i--;
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // DEC_2_BIN



	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; i++, decimal /= 16)
	{
		hex[i] = decimal % 16;//������� �� ������� ������ ������ ������ ��������
		hex[i] += hex[i] < 10 ? 48 : 55;
		//decimal /= 16;
	}

	cout << "0x";	//��� �������, ������������, ��� ����� �������� � Hexadecimal
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default:cout << hex[i];
		}*/
		/*if (hex[i] < 10)
		{
			cout << char(hex[i] + 48);
		}
		else
		{
			cout << char(hex[i] + 55);
		}*/
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);	//int
		//cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));			//int
		cout << hex[i];
	}
	cout << endl;
}