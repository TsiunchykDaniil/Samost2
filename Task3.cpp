#include <iostream>
using namespace std;

int* input(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 3 + 1;
		cout << arr[i] << " ";
	}
	return arr;
}

void maxFindNumber(int* arr, int n)
{
	int k = 0, max = 0;
	for (int i = 0; i < n; i++)
	{
		int j = i;
		while (arr[i] == arr[j])
			{
				k++; 
				if (k > max) { max = k;};
				j++;
				
			}
			k = 0;
		}
	cout << endl << max;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива " << endl;
	int n;
	cin >> n;
	int* mass = input(n);
	cout << endl;
	maxFindNumber(mass, n);
	delete[] mass;
	return 0;
}