#include<iostream>
using namespace std;

//#define KLAVA				//���� � �����
//#define ERRAYS_revers		//������ � �������� �������
//#define ERRAYS_NErevers	//������ � �������� �������
//#define SUM_ERRAYS		//����� ��������� �������
//#define SREDAR_ARRAYS		//������� ��������������
#define MAX_MIN				//�����������t � ����������� ��������

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef KLAVA
	cout << "������1. ���� ��������� � ����������."; cout << endl;
	cout << "������� ����� 5 ���� ����� ENTER: "; cout << endl;
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];

	}
	cout << "������ �� 5 ���� ����������: "; cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // KLAVA

#ifdef ERRAYS_revers
	cout<<"������2. ������ � �������� �������."; cout << endl;
	const int SIZE = 5;		
	int arr[SIZE] = { 4,3,2,1,0 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ERRAYS_revers

#ifdef ERRAYS_NErevers
	cout << "������3. ������ � ������ �������."; cout << endl;
	const int SIZE = 5;		
	int arr[SIZE] = { 0,1,2,3,4 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ERRAYS_NErevers

#ifdef SUM_ERRAYS
	cout << "������ 4. ����� ��������� �������."; cout << endl;
	int sum = 0;		
	const int SIZE = 10;
	int arr[10];
	cout << "������� 10 ��������� ������� ����� ENTER: ";
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	cout << "����� ��������� ������� ����������: " << sum;
#endif // SUM_ERRAYS

#ifdef SREDAR_ARRAYS
	cout << "������ 5. ������� ��������������."; cout << endl;
	double sum = 0;			//�� ����������
	const int SIZE = 7;
	int arr[7];
	cout << "������� 10 ��������� �������: ";
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		sum = (sum + (arr[i])) / 7;
	}
	cout << "����� ��������� ������� ����������: " << sum;
#endif // SREDAR_ARRAYS

#ifdef MAX_MIN
	cout << "������ 6. ������������ ����������� ��������."; cout << endl;
	int max = 0;
	int min = 0;	//��������� ������� ������ ������������ ��������
	const int SIZE = 7;
	int arr[7];
	cout << "������� ����� 7 ���� ����� ������: ";
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		max = arr[0];

	}
	for (int i = 1; i < SIZE; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << "������������ �������� ������� ����������: ";
	cout << max; cout << endl;
	cout << "����������� �������� ������� ����������: ";
	cout << min;
	
#endif // MAX_MIN


	
	

}