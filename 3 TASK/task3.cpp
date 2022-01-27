#include <iostream>
#include <math.h>
using namespace std;

#define M 5

bool isSimple(int N) //Функция проверки числа на простоту
{
    for(int i = 2; i <= sqrt(N); i++)
        if (N % i == 0)
            return false;
    if ((N == 0) || (N == 1))
        return false;
    return true;
}

void Transpose(int matrix[M][M]) //Функция транспонирования матрицы
{
    int t;
    for(int i = 0; i < M; ++i)
    {
        for(int j = i; j < M; ++j)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
}

int main()
{
setlocale(LC_ALL, "rus");
int arr[M][M] = {
{-12, -6, -6, -8, 3},
{-8, -7, -6, 5, -3},
{0, -7, 7, -9, -4},
{-1, 10, -8, -15, -5},
{6, -4, -2, -5, -3},
};
int b[M][M];
int i, j, k;
int n = 0;
int max = -99999, row, col;
double gmean = 1;

for(i = 0; i < M; i++)
{
    for(j = 0; j < M; j++)
    {
        if(arr[i][j] > max)
        {
            max = arr[i][j];
            row = i + 1;
            col = j + 1;
        }
        if(arr[i][j] < 0)
        {
            k++;
        }
    }
}

for(i = 0; i < M; i++)
{
    for(j = 0; j < M; j++)
    {
        if(((i + j) + 1 == M) && isSimple(arr[i][j]))
        {
            gmean *= arr[i][j];
            n++;
        }
    }
}

cout << "Максимальный элемент: " << max << " Строка: " << row << " Столбец: " << col << endl;
cout << "Количество отрицательных элементов: " << k << endl;
cout << "Среднее геометрическое: " << pow(gmean, 1.0 / n) << endl;
cout << endl;
cout << "A = B * 3: " << endl;
for(i = 0; i < M; i++)
{
    for(j = 0; j < M; j++)
    {
        b[i][j] = arr[i][j] * 3;
        cout << b[i][j] << " ";
    }
    cout << endl;
}
cout << endl;

Transpose(arr);
cout << "Транспонированная матрица: " << endl;
for(i = 0; i < M; i++)
{
    for(j = 0; j < M; j++)
        cout << arr[i][j] << " ";
    cout << endl;
}
cout << endl;
cout << "А = 3 * B + B^T: " << endl;
for(i = 0; i < M; i++)
{
    for(j = 0; j < M; j++)
    {
        cout << b[i][j] + arr[i][j] << " ";
    }
    cout << endl;
}
return 0;
}

