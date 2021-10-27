#include <iostream>
using namespace std;

int* input(int size)
{
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % size - 2; //Чтобы элемет имел равный шанс совпасть на всём массиве, а не гарантированно вначале
        cout << arr[i] << " ";
    }
    return arr;
}

void firstI(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == i) {
            cout << endl << "Первый элемент совпавший со своим индексом = "<<arr[i];
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