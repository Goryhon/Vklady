#include <iostream>
#include <cmath>
 
using namespace std;
 
bool isSimple(int N) //Функция проверки числа на простоту
{
    for(int i = 2; i <= sqrt(N); i++)
        if (N % i == 0)
            return false;
    if ((N == 0) || (N == 1))
        return false;
    return true;
}
 
int main()
{
    srand(0);
    int N, sum, k;
    cout << "Введите количество чисел:" << endl;
    cout << "N = ";
    cin >> N;
    int* A = new int[N];
    k = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (isSimple(A[i]))
        {
            k++;
        }
        else 
        {
            k = 0;
        }
    }
    cout << endl;
    if (k)
    {
        cout << "Данная последовательность имеет " << k << " простых элементов.";
    }
    else
        cout << "Простые числа не найдены!" << endl;
    delete [] A;
}
