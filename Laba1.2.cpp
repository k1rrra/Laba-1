// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> //Подключаем стандартную библиотеку
#include <iomanip>
#include <math.h>
#include <conio.h>
using namespace std; //Объявляем пространство имен

int main()
{
	setlocale(LC_ALL, "Russian"); //Ставим российскую локализацию

	double a = 1000, b = 0.0001; //Объявляем переменные типа double и присваиваем им значения
	double res, res1, res2, res3; //Объявляем переменные res
	res = (a + b) * (a + b);
	res1 = (a * a + 2 * a * b); 
	res2 = b * b;
	res3 = (res - res1) / res2;
	cout << "a = " " " << a << endl;
	cout << "b = " " " << b << endl;
	cout << "c1 = " " " << fixed << res << endl;
	cout << "c2 = " " " << fixed << res1 << endl;
	cout << "c3 = " " " << fixed << res2 << endl;
	cout << "X = " " " << res3 << endl;
	cout << "Значение double: " << setprecision(11) << res3 << endl; //Выводим текст, значение res
	//С помощью функции setprecision() задаем количество отображаемых знаков (11)
	float x, a1, b1, c1, c2, c3;

	a1 = 1000;
	b1 = 0.0001;
	c1 = pow((a1 + b1), 2); // Powf нужна для возведения в степень
	c2 = (a1 * a1 + 2 * a1 * b1);
	c3 = b1*b1;
	x = (c1 - c2) / c3;
	cout << "a = " " " << a1 << endl;
	cout << "b = " " " << b1 << endl;
	cout << "c1 = " " " << fixed << c1 << endl;
	cout << "c2 = " " " << fixed << c2 << endl;
	cout << "c3 = " " " << fixed << c3 << endl;
	cout << "X = " " " << x << endl;
	cout << "Значение float: " << setprecision(11) << x << endl; 
	cout << "Значения различаются из-за погрешности в типе данных float\n";
	system("pause");
	return 0;
}

