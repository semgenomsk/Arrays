#include<iostream>
using namespace std;

//#define KLAVA				//ввод с клавы
//#define ERRAYS_revers		//массив в обратнем порядке
//#define ERRAYS_NErevers	//массив в обратнем порядке
//#define SUM_ERRAYS		//сумма элементов массива
//#define SREDAR_ARRAYS		//среднее арифметическое
#define MAX_MIN				//макисмальноt и минимальное значение

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef KLAVA
	cout << "Задача1. Ввод элементов с клавиатуры."; cout << endl;
	cout << "Введите любые 5 цифр через ENTER: "; cout << endl;
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];

	}
	cout << "Массив из 5 цифр составляет: "; cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // KLAVA

#ifdef ERRAYS_revers
	cout<<"Задача2. Массив в обратном порядке."; cout << endl;
	const int SIZE = 5;		
	int arr[SIZE] = { 4,3,2,1,0 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ERRAYS_revers

#ifdef ERRAYS_NErevers
	cout << "Задача3. Массив в прямом порядке."; cout << endl;
	const int SIZE = 5;		
	int arr[SIZE] = { 0,1,2,3,4 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ERRAYS_NErevers

#ifdef SUM_ERRAYS
	cout << "Задача 4. Сумма элементов массива."; cout << endl;
	int sum = 0;		
	const int SIZE = 10;
	int arr[10];
	cout << "Введите 10 элементов массива через ENTER: ";
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	cout << "Сумма элементов массива составляет: " << sum;
#endif // SUM_ERRAYS

#ifdef SREDAR_ARRAYS
	cout << "Задача 5. Среднее арифметическое."; cout << endl;
	double sum = 0;			//не получилось
	const int SIZE = 7;
	int arr[7];
	cout << "Введите 10 элементов массива: ";
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		sum = (sum + (arr[i])) / 7;
	}
	cout << "Сумма элементов массива составляет: " << sum;
#endif // SREDAR_ARRAYS

#ifdef MAX_MIN
	cout << "Задача 6. Максимальное минимальное значение."; cout << endl;
	int max = 0;
	int min = 0;	//программа находит только максимальное значение
	const int SIZE = 7;
	int arr[7];
	cout << "Введите любые 7 цифр через ПРОБЕЛ: ";
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
	cout << "Макисмальное значение массива составляет: ";
	cout << max; cout << endl;
	cout << "Минимальное значение массива состваляет: ";
	cout << min;
	
#endif // MAX_MIN


	
	

}