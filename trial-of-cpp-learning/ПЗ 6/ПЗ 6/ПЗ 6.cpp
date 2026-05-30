#include <vector>
#include <iostream>
using namespace std;

// размерность массива

void nettspend() {
	setlocale(LC_ALL, "RU");
	int a;
	cout << "Введите размерность массива: ";
	cin >> a;
	vector <int> arr(a);
	for (int i = 0; i < a; i++) {
		cout << "Вводите элементы ";
		cin >> arr[i];
	}
	cout << "   " << endl;
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "Вот ваш массив: ";
	for (int a : arr) {
		cout << a << " ";
	}
	cout << endl;

	// определение и вывод на экран разницы между суммой четных и количеством нечетных элементов массива

	int summChet = 0;
	int countNeChet = 0;


	for (int j = 0; j < arr.size(); j++) {
		if (arr[j] % 2 == 0) {
			summChet += arr[j];
		}
		else {
			countNeChet++;
		}

	}
	int Raznica = summChet - countNeChet;
	cout << "   " << endl;
	cout << "Вот сумма четных элементов: " << summChet << endl;
	cout << "   " << endl;
	cout << "Kоличество нечетных элемeнтов: " << countNeChet << endl;
	cout << "   " << endl;
	cout << "Их разница: " << Raznica << endl;
	cout << "   " << endl;


	// поиск в массиве максимального нечетного и последнего отрицательного элемента, а затеи вывод на экран

	int maxNeChetIndex = -1;
	int lastOtricIndex = -1;

	for (int f = 0; f < a; f++) {
		if (arr[f] % 2 != 0) {
			if (maxNeChetIndex == -1 || arr[f] > arr[maxNeChetIndex]) {
				maxNeChetIndex = f;
			}
		}
		if (arr[f] < 0) {
			lastOtricIndex = f;
		}
	}
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "   " << endl;
	if (maxNeChetIndex != -1) {
		cout << "Максимальный нечет элемент массива: " << arr[maxNeChetIndex] << ".";
		cout << " Позиция данного элемента - " << maxNeChetIndex << endl;
	}
	else {
		cout << "Нет нечетных элементов" << endl;
	}
	cout << "   " << endl;
	if (lastOtricIndex != -1) {
		cout << "Последний отриц элемент: " << arr[lastOtricIndex] << "."; 
		cout << " Позиция данного элемента - " << lastOtricIndex << endl;
	}
	else {
		cout << "Нет отриц эл." << endl;
	}
	cout << "   " << endl;
	// создание массива №1

	if (maxNeChetIndex == -1) {
		cout << "Создание другого массива не возможно" << endl;
	}

	int otricElementsMassiva = 0;

	for (int d = 0;d < maxNeChetIndex; d++) {
		if (arr[d] < 0) {
			otricElementsMassiva = d;
		}
		

	}
	// создание массива №2
	int l = 0;
	vector <int> newArr(l);
	for (int k = 0; k < maxNeChetIndex; k++) {
		if (arr[k] < 0) {
			newArr.push_back(arr[k]);
		}
	}
	// создание массива №3 (вывод нового массива)

	if(newArr.empty()) {
		cout << "Создать массив невозможно, отрицательных элементов до максимума нету" << endl;
	}
	else {
		cout << "Вот ваш новый массив: ";
		for (int k : newArr) {
			cout << k << " ";

		}
	}
	cout << endl;

}
int main() {
	nettspend();
}

