// Лаба 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	int K = 3;
	int i = 0;

	cout << "Сумма целых положительных чисел кратных 3 и меньших 200:";
	cout << endl;
	for (i = 0; i < 200; i++) {
		if (!(i % K)) //Если i делится на К без остатка,
			n = n + i; //то к n прибаляем i
	}
	cout << "Сумма = " << n << endl;
	system("pause");
	return 0;
}

