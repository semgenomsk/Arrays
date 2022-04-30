#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[],int const n, const int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr,n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr,n) << endl;
	cout << "Средне арифметическое элементов массива: " << Avg(arr,n) << endl;
	//минимальоне максимальоне
	cout << "Минимальное значение массива: " << minValueIn(arr,n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(arr,n) << endl;
	//сдвиг массива
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	const int SIZE = 10;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr,SIZE) << endl;
	cout << "Средне арифметическое элементов массива: " << Avg(brr,SIZE) << endl;
	//минимальоне максимальоне
	//int min, max;
	cout << "Минимальное значение массива: " << minValueIn(brr,SIZE) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(brr,SIZE) << endl;
	//сдвиг массива
	//int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
}
void FillRand(int arr[], const int n)
{
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	int min;
	min = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}	
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max;
	max = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], int const n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}