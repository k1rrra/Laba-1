// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout.setf(ios::boolalpha);
	cout << "Задание 1\n";
	cout << "Введите значение переменной n: ";
	cin >> n;
	cout << "Введите значение переменной m: ";
	cin >> m;
	cout << "n++m = " << (n+++m) << endl;
	system("pause");
	cout << "Задание 2\n";
	cout << "Введите значение переменной n: ";
	cin >> n;
	cout << "Введите значение переменной m: ";
	cin >> m;
	cout << "m-- > n = " << (m-- > n) << endl;
	system("pause");
	cout << "Задание 3\n";
	cout << "Введите значение переменной n: ";
	cin >> n;
	cout << "Введите значение переменной m: ";
	cin >> m;
	cout << "n-- > m = " << (n-- > m) << endl;
	system("pause");
	return 0;
}

