#include <iostream>
#include <cmath>
using namespace std;


void task1() {
    setlocale(LC_ALL, "RU");
    int a, b, maxNum, minNum;
    cout << "Введите два числа - ";
    cin >> a >> b;
    int start = min(a, b);
    int end = max(a, b);
    long long product = 1;
    bool found = false;

    for (int i = start; i <= end; i++) {
        if (i != 0 && i % 3 == 0) {
            product *= i;
            found = true;


        }
    }
    if (found) {
        cout << "Произведение всех чисел, кратных 3 лежащих между ними: " << product << endl;
    }
    else {
        cout << "Чисел кратных трём нету(" << endl;
    }
    double stepen = pow(end, start);
    cout << end << "^" << start << " = " << stepen << endl;
}
int main() {
    task1();
    return 0;
}
