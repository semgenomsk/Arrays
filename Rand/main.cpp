#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
	}
}