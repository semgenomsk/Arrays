#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n\------------------------------------------------"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS,const int COLS);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);
const char* Avg(char arr[], const int n);

template<typename T>
T minValueIn(T arr[], const int n);

template<typename T>
T maxValueIn(T arr[], const int n);

template<typename T>
void shiftLeft(T arr[],int const n, const int number_of_shifts);

template<typename T>
void shiftRight(T arr[],int const n, const int number_of_shifts);

template<typename T>
void Sort(T arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr,n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr,n) << endl;
	cout << "Средне арифметическое элементов массива: " << Avg(arr,n) << endl;
	//сортировка
	Sort(arr, n);
	Print(arr, n);
	//минимальоне максимальоне
	cout << "Минимальное значение массива: " << minValueIn(arr,n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(arr,n) << endl;
	//сдвиг массива влево
	int number_of_shifts;
	cout << "Введите количество сдвигов массива влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	//сдвиг массива вправо
	cout << "Введите количество сдвигов массива вправо: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	
	cout << delimiter << endl;

	const int D_SIZE = 10;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr,D_SIZE) << endl;
	cout << "Средне арифметическое элементов массива: " << Avg(d_arr,D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	//минимальоне максимальоне
	//int min, max;
	cout << "Минимальное значение массива: " << minValueIn(d_arr,D_SIZE) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(d_arr,D_SIZE) << endl;
	//сдвиг массива влево
	//int number_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	//сдвиг массива вправо
	cout << "Введите количество сдвигов массива вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);

	cout << delimiter << endl;

	const int C_SIZE = 7;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Средне арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;

	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
}
void FillRand(int arr[], const int n)
{
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	}
}
void FillRand(char arr[], const int n)
{
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
const char* Avg(char arr[], const int n)
{
	return "Для символов невозможно вычислить среднее арифметическое"; 
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	T min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}	
	return min;
}

template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max;
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

template<typename T>
void shiftLeft(T arr[], int const n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template<typename T>
void shiftRight(T arr[], int const n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)//счетчик i выбирает элемент в который нужно поместить минимальное значение
	{
		for (int j = i+1; j < n; j++)//счетчик j перебирает остальные элементы массива
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}