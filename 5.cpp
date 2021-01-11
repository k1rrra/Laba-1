// Лабораторная работа № 5
// Вариант 1

#include <iostream>
#include <time.h>

using namespace std;

/* Создание двумерного массива с помощью датчика случайных чисел */
void create_arr(char arr[20][60], int n, int m) {
	char c;				
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			c = rand() % 10 + '0';
			// Исключается возможность начала печатной строки с 0
			if (j == 0 && c == '0') {
				j--;
				continue;
			}
			arr[i][j] = c;
		}
}

/* Формирование печатной строки. На вход функции поступает строка из двумерного массива */
void form_row(char arr[60]) {
	cout << "(";

	for (int i = 0; i < 60; i++) {
		// Вместо '0' выводится ','
		// Если предыдущий символ так же был '0', то вывод ',' пропускается
		// Если рассматривается последний символ массива, то ',' не выводится
		// Иначе выводится цифра
		if (arr[i] == '0') {
			if (arr[i - 1] == '0') continue;
			else if (i == 59) continue;
			else cout << ',';
		} else cout << arr[i];
	}

	cout << ")" << endl;
}

/* Вывод двумерного массива в консоль */
void print_arr(char arr[20][60], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "russian");
	srand(time(NULL));
	char arr[20][60];
	int n;
	int m;

	cout << "Введите количество печатных строк" << endl;
	cout << "N: ";
	cin >> n;
	m = 60;
	// Вызов функции создания двумерного массива
	create_arr(arr, n, m);

	cout << endl;
	
	// Вызов функции вывода двумерного массива в консоль
	print_arr(arr, n, m);

	cout << endl;

	// Вызовы функции вывода печатной строки
	for (int i = 0; i < n; i++)
		form_row(arr[i]);
}