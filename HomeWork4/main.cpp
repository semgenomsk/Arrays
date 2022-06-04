//1 � ����� master ����������� ��� ������� ��� ��������� �������� ���� int, float, double, char
//2 ������� ����� Templated2 � � ��� ��������������� ��� ������� ��� ������ � ���������
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n\------------------------------------------------"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
const char* Avg(char arr[], const int n);
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);

template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	int arr[ROWS][COLS];
	FillRand(arr, ROWS, COLS);
	Print(arr, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arr, ROWS, COLS) << endl;
	cout << "������ �������������� ��������� �������: " << Avg(arr, ROWS, COLS) << endl;
	//����������
	Sort(arr, ROWS, COLS);
	Print(arr, ROWS, COLS);
	//����������� ������������
	cout << "����������� �������� �������: " << minValueIn(arr, ROWS, COLS) << endl;
	cout << "������������ �������� �������: " << maxValueIn(arr, ROWS, COLS) << endl;
	//����� ������� �����
	int number_of_shifts;
	cout << "������� ���������� ������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(arr, ROWS, COLS, number_of_shifts);
	Print(arr, ROWS, COLS);
	//����� ������� ������
	cout << "������� ���������� ������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(arr, ROWS, COLS, number_of_shifts);
	Print(arr, ROWS, COLS);

	cout << delimiter << endl;

	double d_arr[ROWS][COLS];
	FillRand(d_arr, ROWS, COLS);
	Print(d_arr, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_arr, ROWS, COLS) << endl;
	cout << "������ �������������� ��������� �������: " << Avg(d_arr, ROWS, COLS) << endl;
	Sort(d_arr, ROWS, COLS);
	Print(d_arr, ROWS, COLS);
	//����������� ������������
	//int min, max;
	cout << "����������� �������� �������: " << minValueIn(d_arr, ROWS, COLS) << endl;
	cout << "������������ �������� �������: " << maxValueIn(d_arr, ROWS, COLS) << endl;
	//����� ������� �����
	//int number_of_shifts;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(d_arr, ROWS, COLS, number_of_shifts);
	Print(d_arr, ROWS, COLS);
	//����� ������� ������
	cout << "������� ���������� ������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(d_arr, ROWS, COLS, number_of_shifts);
	Print(d_arr, ROWS, COLS);

	cout << delimiter << endl;

	char c_arr[ROWS][COLS];
	FillRand(c_arr, ROWS, COLS);
	Print(c_arr, ROWS, COLS);
	cout << "������ �������������� ��������� �������: " << Avg(c_arr, ROWS, COLS) << endl;

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
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
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
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS, COLS;
}
/*const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return "��� �������� ���������� ��������� ������� ��������������";
}*/

template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min;
	min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max;
	max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

template<typename T>
void shiftLeft(T arr[ROWS][COLS], int const ROWS, const int COLS, const int number_of_shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int k = 0; k < number_of_shifts; k++)
		{
			T buffer = arr[i][0];
			for (int j = 0; j < COLS - 1; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = buffer;
		}
	}
}

template<typename T>
void shiftRight(T arr[ROWS][COLS], int const ROWS, const int COLS, const int number_of_shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int k = 0; k < number_of_shifts; k++)
		{
			T buffer = arr[i][COLS - 1];
			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = buffer;
		}
	}
}

template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)	//������� i �������� ������
	{
		for (int j = 0; j < COLS; j++)//������� j �������� �������
		{
			//-------------------------------------
			for (int k = i; k < ROWS; k++)//������� k ���������� ������
			{
				//int l;	//������� l ���������� �������
				//if (k == i)l = j + 1; else l = 0;
				//(k == i) ? l = j + 1 : l = 0;
				//k == i ? l = j + 1 : l = 0;
				//l = k == i ? j + 1 : 0;
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[k][l];
						arr[k][l] = arr[i][j];
						arr[i][j] = buffer;
					}
				}
			}
		}
	}
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = j + 1; k < ROWS; k++)
			{
				if (arr[k][i] < arr[j][i])
				{
					T buffer = arr[k][i];
					arr[k][i] = arr[j][i];
					arr[j][i] = buffer;
				}
			}
		}
	}
}