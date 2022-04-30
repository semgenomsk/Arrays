#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	const int SIZE = 5;		//ввод с клавиатуры
	int arr[SIZE];
	/*cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}*/
	int minRand, maxRand;
	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальоне случайное число: "; cin >> maxRand;
	minRand *= 10;
	maxRand *= 10;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 10;
		//псевдослучайное число
		//0...32 767 (RAND_MAX)
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = SIZE-1; i >= 0; i--)		//элементы в обратнем порядке
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
		
	int sum = 0;			//сумма элементов и среднее арифметическое
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива составляет: " << sum << endl;
	cout << "Среднее арифметическое элементов массива составляет: " << (double)sum / SIZE << endl;

	int min, max;	//макисмальное и минимальное
	min=max = arr[1];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение массива состваляет: " << min << endl;
	cout << "Макисмальное значение массива составляет: " << max << endl;
	
	
	

}