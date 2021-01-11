// Лабораторная работа №6
// Вариант 1
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "russian");		// Возможность вывода русских символов в консоль
	char input[255];					// Исходная строка максимальной длины 255 символов
	char compressed[255];				// Сжатый вариант исходной строки без пробелов и точки в конце
	cout << "Введите строку для проверки на палиндром: ";
	gets_s(input);
	
	// Удаление из исходной строки пробелы и точку
	for (int i = 0, j = 0; i <= 255; i++) {
		if (input[i] != ' ' && input[i] != '.') {
			compressed[j] = input[i];
			j++;
		}
	}

	bool pal = true;					// Флаг, характеризующий строку как палендром (true - палендром, false - не палендром)
	// Проверка равенства символов сжатой строки от обоих концов к середине. Если равенство нарушается, то строка палендромом не считается
	for (int i = 0, j = strlen(compressed) - 1; i < strlen(compressed) / 2; i++, j--) {
		if (compressed[i] != compressed[j]) pal = false;			
	}

	if (pal) cout << "Строка палендром";
	else cout << "Строка не палендром";
}