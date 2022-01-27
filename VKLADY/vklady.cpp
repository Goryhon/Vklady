#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите нужную сумму для вклада: " << endl;
    double n;
    cin >> n;
    
    if(n < 10000) 
    { 
        cout << "Ошибка! Минимальная сумма вклада составляет 10000"; 
        return 0;
    }
    else if (n > 500000) 
    { 
        cout << "Ошибка! Максимальная сумма вклада составляет 500000"; 
        return 0;
    }
    else {
    cout << "Выберете срок вклада: " << endl;
    cout << "* 1 месяц - 2%\n* 3 месяца - 3%\n* 6 месяцев - 4.5%\n* 12 месяцев - 5.5%" <<endl;
    int d;
    cin >> d;
    
    switch (d)
    {
    case 1:
      { 
        double sum = n;
        for(int i = 1; i <= d; i++)
        {
            double procent = (2 * sum) / 100;
            sum = sum + procent;
            cout << "Месяц " << i << " Баланс: " << sum << endl;
        }
        cout << "Прибыль: " << sum - n;
        break;
      }
    case 3:
      {
        double sum = n;
        for(int i = 1; i <= d; i++)
        {
            double procent = (3 * sum) / 100;
            sum = sum + procent;
            cout << "Месяц " << i << " Баланс: " << sum << endl;
        }
        cout << "Прибыль: " << sum - n;
        break;
      }
    case 6:
      {
        double sum = n;
        for(int i = 1; i <= d; i++)
        {
            double procent = (4.5 * sum) / 100;
            sum = sum + procent;
            cout << "Месяц " << i << " Баланс: " << sum << endl;
        }
        cout << "Прибыль: " << sum - n;
        break;
      }
    case 12:
      {
        double sum = n;
        for(int i = 1; i <= d; i++)
        {
            double procent = (5.5 * sum) / 100;
            sum = sum + procent;
            cout << "Месяц " << i << " Баланс: " << sum << endl;
        }
        cout << "Прибыль: " << sum - n;
        break;
      }
    default:
        cout << "Такого предложения еще не существует!";
        break;
    }
  }
}