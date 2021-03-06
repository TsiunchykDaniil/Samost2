#include <iostream>
using namespace std;

int* input(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 3 + 1;
		cout << arr[i] << " ";
		if (i % 2 == 1) {cout << endl; }
	}
	return arr;
}

void maxLength(int* arr, int n)
{
	double max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j+=2)
		{
			if ((double)pow(pow(arr[i] - arr[j], 2) + pow(arr[i + 1] - arr[j + 1], 2), 1 / 2) > max)
				{ max = (double)pow(pow(arr[i] - arr[j], 2) + pow(arr[i + 1] - arr[j + 1], 2), 1 / 2); }
		}
	}
	cout <<endl<< "Максимальное расстояние = " << max;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите кол-во точек " << endl;
	int n;
	cin >> n;
	n = 2 * n;
	int* mass = input(n);
	cout << endl;
	maxLength(mass, n);
	delete[] mass;
	return 0;
}