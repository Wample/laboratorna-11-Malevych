#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k;
	cout << "Введіть номер задачі" << endl;
	cin >> k;
	if (k == 1)
	{
		int a, b, c;
		cout << "Введіть три числа" << endl;
		cout << "Перше число:";
		cin >> a;
		cout << "Друге число:";
		cin >> b;
		cout << "Третє число:";
		cin >> c;
		if (a > b && a > c) {
			cout << "Перше число найбільше";
		}
		else if (b > a && b > c) {
			cout << "Друге число найбільше";
		}
		else if (c > a && c > b) {
			cout << "Третє число найбільше";
		}
		else if (a == b && b == c) {
			cout << "Всі числа рівні\nПерше число = Другому числу= Третьому числу";
		}
		return 0;

	}
	else if (k == 2)
	{
		int ans = 0;
		for (int i = 1; i < 100; i++) {
			for (int l = 1; l < 100; l++) {
				if (l + i == 100) {
					ans++;
				}
			}
		}
		cout << ans;
	}
	else if (k == 3)
	{
		int ans = 0;
		for (int i = 1; i < 100; i++) {
			for (int l = 1; l < 100; l++) {
				if (l + i == 100) {
					ans++;
				}
			}
		}
		cout << ans;
	}
	else
	{
		cout << "Такої задачі не знайдено" << endl;
	}
	return 0;
}