#include <iostream>

using namespace std;

int main()
{
    int** mass, n, i, j;
    setlocale(LC_ALL, "Russian");
    cout << "Введите кол-во строк квадратной двоичной матрицы: " << endl;
    cin >> n;
    mass = new int* [n];

    for (i = 0; i < n; i++)
        mass[i] = new int[n];
    cout << endl << "Заполнение матрицы : ";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cin >> mass[i][j];
        }
    cout << "Вывод самой матрицы " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << mass[i][j] << " ";
        cout << endl;
    }
    cout << "Транспорация относительно главной диагонали: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << mass[j][i] << " ";
        cout << endl;
    }
    cout << "Транспорация относительно побочной диагонали: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << mass[n - 1 - j][n - 1 - i] << " ";
        cout << endl;
    }
    cout << endl;

    return 0;
}