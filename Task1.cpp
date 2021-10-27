#include <iostream>
using namespace std;

int* input(int size)
{
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10 - 5; 
        cout << arr[i] << " ";
    }
    return arr;
}

void firstI(int* arr, int n)
{
    cout << endl << "Введите число" << endl;
    int o; cin >> o;
    for (int i = 0; i < n; i++)
        if (arr[i] == o) {
            cout << endl << "Первый совпавший элемент имеет индекс = " << i;
            break;
        }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива " << endl;
    int n;
    cin >> n;
    int* mass = input(n);
    firstI(mass, n);
    delete[] mass;
    return 0;
}
