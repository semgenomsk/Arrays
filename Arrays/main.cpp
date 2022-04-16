#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
 	int arr[SIZE] = {1,2,3,4,5};
	//arr[2] = 3;		//обращаемся ко второму элементу массиву, чтобы записать в него значение 3
	//SIZE - 1 или n - 1
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	/*arr[1] = 5;
	arr[2] = 6;
	arr[3] = 7;
	arr[4] = 8;
	arr[5] = 9;
	arr[6] = 10;
	arr[7] = 1;
	arr[8] = 2;
	arr[9] = 3;*/
}