// Лабораторная работа № 3
// Вариант 1
// y = 3^x

#include<iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main() {
	int n = 10;				// Количество элементов ряда
	int i;					
	float e = 0.0001;		// Заданная точность
	float a = 0.1;			// Нижняя граница диапазона аргумента
	float b = 1;			// Верхняя граница диапазона аргумента
	float h = (b - a) / n;		// Шаг
	float s, curr;

	cout << "X\t\t SN\t\t SE \t\t Y" << endl;

	// Цикл по диапазону значений аргумента
	for (float x = a; x <= b; x += h) {
		
		// Вычисление значения функции до n-го элемента соотвествующего ряда
		curr = 1;
		s = curr;
		for (i = 1; i < n; i++) {
			curr = curr * (log(3) * x / i);		// Вычисление следующего элемента ряда
			s += curr;
		}
		cout << setiosflags(ios::fixed) << setprecision(6) << x << "\t" << s << "\t";
		//

		// Вычисление значения функции, пока очередной элемента ряда не ниже e
		i = 1;
		curr = 1;
		s = curr;
		while (true) {
			curr = curr * (log(3) * x / i);	
			if (fabs(curr) < e) break;		// Условие прекращения вычисления суммы, модуль элемента меньше заданной точности
			i++;
			s += curr;
		}
		cout << s << "\t" << pow(3, x) << endl;
		//
	}
}