#include <iostream>
using namespace std;

//void Sum(int a, int b)
//{
//	cout << a + b << endl;
//}
//
//void Sum(double a, double b)
//{
//	cout << a + b << endl;
//}
//
//void Sum(char a, char b)
//{
//	cout << a + b << endl;
//}

//template <class T>
//void Sum(T a, T b)
//{
//	cout << a + b << endl;
//}
//
//template <class T, class B>
//void Sum(T a, B b)
//{
//	cout << a + b << endl;
//}

template < class A,class S>
void Init(A arr, S size)
{
	arr[size];
	for (int i = 0; i < size; i++)
	{
		for (int  j = 0; i < size; i++)
		{
			arr[i][j] = rand() % 20;
		}
		cout << endl;
	}
}

int main()
{
	
}