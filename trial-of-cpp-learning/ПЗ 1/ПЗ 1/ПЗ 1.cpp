#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double x;
	cout << "введите число x - ";
	cin >> x;
	double y = (6 + (4 * (abs(x))) / (pow(x - 1, 2) + 1));
	double x1 = (y - x);
	int x2 = round(x1);
	double okruglenyX = round(x * 1000.0) / 1000.0;
	double okruglenyY = round(y * 1000.0) / 1000.0;
	cout << fixed << setprecision(3);
	cout << "х=" << okruglenyX << " y=" << okruglenyY << " !!!!!!!! " << "x1=" << x2 << endl;
	return 0;
})
