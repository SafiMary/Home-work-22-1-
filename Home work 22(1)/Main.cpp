#include <iostream>
using namespace std;


void func(int* pnum, int x) {
	int res = 1;
	for (int i = 0; i < x; i++)
		res *= *pnum;
	cout << res << '\n';
}

int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 1
	int tmp;
	const int size = 10;
	int mass[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pmass = &mass[0];

	cout << "Изначальный массив: \n";
	for (int i = 0; i < size; i++)
		cout << *(pmass + i) << ' ';
	cout << '\n';
	for (int i = 0; i < size; i++) {
		if ((i + 1) % 2 == 1 && i != 10) {
			tmp = *(pmass + i);
			*(pmass + i) = *(pmass + i + 1);
			*(pmass + i + 1) = tmp;
		}
	}
	cout << "Отсортированный массив: \n";
	for (int i = 0; i < size; i++)
		cout << *(pmass + i) << ' ';
	cout << '\n';
	//Задача 2
	int n = 10, m;
	int* pn = &n;
	cout << "Введите степень: \n";
	cin >> m;
	func(&n, m);

	return 0;
}