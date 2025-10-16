#include <iostream>
using namespace std;

template < class A,class S>
void Init(A arr, S size)
{
	srand(unsigned(time(0)));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}
}

template < class A, class S>
void Print(A arr, S size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template < class A, class S>
void FindElement(A arr, S size)
{
	int min = arr[0][0];
	int max = arr[0][0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i][i] > max)
		{
			max = arr[i][i];
		}

		if (arr[i][i] < min)
		{
			min = arr[i][i];
		}
	}
	cout << "Max element: " << max << endl;
	cout << "Min element: " << min << endl;
}

template < class A, class S>
void Sort(A arr, S size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int d = size - 1; d > j; d--)
			{
				if (arr[i][d] < arr[i][d - 1])
				{
					int temp = arr[i][d];
					arr[i][d] = arr[i][d - 1];
					arr[i][d - 1] = temp;
				}
			}
		}
	}
}

int main()
{
	const int size = 5;
	int arr[size][size];
	Init(arr, size);
	Print(arr, size);
	FindElement(arr, size);
	Sort(arr, size);
	Print(arr, size);
}