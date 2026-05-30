#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void task1()
{
	setlocale(LC_ALL, "RU");



	// размерность массива
	int a;
	cout << "Введите размерность массива:";
	cin >> a;
	vector <int> arr(a);
	for (int i = 0; i < a; i++) {
		cout << "вводите элементы: ";
		cin >> arr[i];
	}
	cout << "Вот ваш массив: ";
	for (int a : arr) {
		cout << a << " ";

	}
	cout << endl;



	// поиск позиции минимального элемента и вывод его на экран
	int minIndex = 0;
	for (int j = 0; j < arr.size(); j++) {
		if (arr[j] < arr[minIndex]) {
			minIndex = j;
		}
	}
	cout << "Позиция минимального элемента: " << minIndex << endl;
	cout << "Значение минимального элемента: " << arr[minIndex] << endl;
	
	
	// Вычисление суммы трехзначных элементов и вывод ее на экран

	int sumElements = 0;
	for (int k = 0; k < arr.size(); k++) {
		if (abs(arr[k]) >= 100 && abs(arr[k]) <= 999) {
			sumElements += arr[k];

		}
	}
	cout << "Сумма трехзначных элементов:" << sumElements << endl;

	
	
	// Замена всех четных элементов в массиве на 3, и вывод этого массива на экран

	for (int f = 0; f < arr.size(); f++) {
		if (arr[f] % 2 == 0) {
			arr[f] = 3;
		}
	}
	for (int a : arr) cout << a << " ";
	cout << endl;


	// поиск первого положительного элемента
	int firstPlusEl;
	for (int d = 0; d < a; d++) {
		if (arr[d] > 0) {
			firstPlusEl = arr[d];
			cout << "вот первый положительный элемент: " << firstPlusEl << endl;
			break;
		}
	}



	 
}
int main() {
	task1();
}
