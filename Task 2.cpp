#include <iostream>
using namespace std;

int* input(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 11 - 5;
		cout << arr[i] << " ";
	}
	return arr;
}

void outputAllRight(int* arr, int n)
{
	cout << "Вывод ряда подходящих чисел:" << endl;
	for (int i = 2; i < n; i++)
		if ((arr[i - 2] - arr[i - 1]) > arr[i])
		{
			cout << arr[i] << " ";
		}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива " << endl;
	int n;
	cin >> n;
	int* mass = input(n);
	cout << endl;
	outputAllRight(mass, n);
	delete[] mass;
	return 0;
}