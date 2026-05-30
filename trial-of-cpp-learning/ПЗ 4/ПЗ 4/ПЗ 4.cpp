#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <cctype>



using namespace std;
void task1() {
	setlocale(LC_ALL, "RU");
	int a, b;
	cout << "введите первое целое число - ";
	cin >> a;
	cout << "Введите второе число - ";
	cin >> b;
	int maxN = max(a, b);
	int minN = min(a, b);
	cout << "Большее число - " << maxN << endl;
	cout << "Меньшее число - " << minN << endl;
	int countEven = 0;
	long long maxN1 = maxN;
	if (maxN1 == 0) {
		countEven = 1;
	}
	else {
		while (maxN1 > 0) {
			int digit = maxN1 % 10;
			if (digit % 2 == 0) {
				countEven++;
			}
			maxN1 /= 10;
		}
	}
	cout << "Количество четных цифр большего числа: " << countEven << endl;
	cout << "Все четные делители меньшего числа:" << minN << " - ";
	for (int i = 1; i <= minN; i++) {
		if (minN % i == 0 && i % 2 == 0) {
			cout << " " << i << " ";
		}
	}
	cout << endl;
	int k = (maxN / minN) + 1;
	cout << "Вот нужный минимальный множитель, чтобы число превзошло себя: " << k << endl;

	//Проверка упорядочности чисел.

	string s1 = to_string(a);
	string s2 = to_string(b);

	string maxNum;
	if (s1.length() > s2.length()) {
		maxNum = s1;
	}
	else if (s2.length() > s1.length()) {
		maxNum = s2;
	}
	else {
		maxNum = (s1 >= s2) ? s1 : s2;
	}

	bool ascend = true;
	bool desgend = true;
	for (size_t i = 0; i < maxNum.length() - 1; i++) {
		if (maxNum[i] > maxNum[i + 1]) ascend = false;
		if (maxNum[i] < maxNum[i + 1]) desgend = false;
	}
	if (ascend || desgend) {
		cout << "Цифры в числе упорядочены.";
		if (ascend && desgend)
			cout << "(все цифры одинаковые)";
		else if (ascend) cout << " по возрастанию";
		else cout << " по убыванию";
		cout << "." << endl;

	}
	else {
		cout << "Цифры в числе не упорядочены." << endl;

	}



}
int main() {
	task1();
	return 0;
}
