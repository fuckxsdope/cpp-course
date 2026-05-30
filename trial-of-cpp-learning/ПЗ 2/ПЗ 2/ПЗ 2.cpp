#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void task1()
{
    setlocale(LC_ALL, "RU");
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > 0 || b > 0) {
        float summ = a + b;
        float proizv = a * b;
        cout << "Вот ваша сумма чисел - " << summ << endl;
        cout << "Вот ваше произведение чисел - " << proizv << endl;
    }
    else {
        float summ1 = abs(a + b);
        cout << "Вот ваш модуль суммы: " << summ1 << endl;
    }
}

void task2()
{
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите два числа - ";
    cin >> a >> b;
    int maxNum = max(a, b);
    if (maxNum >= -9 && maxNum <= 9) {
        int last_num = maxNum % 10;
        cout << "Вот ваша последняя цифра - " << last_num << endl;
    }
    else {
        float module_proizved = abs(a * b);
        float koren = sqrt(module_proizved);
        cout << "Вот ваш корень - " << koren << endl;
    }
}

int main()
{
    int choice;
    cout << "Выберите задачу (1 или 2): ";
    cin >> choice;

    if (choice == 1) task1();
    else if (choice == 2) task2();
    else cout << "Неверный ввод!" << endl;

    return 0;
}
