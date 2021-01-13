#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// F(x)=0   F(x)=3sin(sqrt(x))+0.35x-3.8
// f(x)=x  f(x)=x+g(x)F(x)
// где g(x)=1/F'(x)
// F'(x)=3cos(sqrt(x))/2sqrt(x) + 0.35

double eps = 1e-06; // выставляем точность

// наша f(x)
double f(double x) {
	return (x - 1 / (3 * cos(sqrt(x)) / (2 * sqrt(x)) + 0.35) * (3 * sin(sqrt(x)) + 0.35 * x - 3.8));
}


int main() {
	double l = 2, r = 3; // границы в которых находится корень уравнения

	double xn = 2; // за нулевое приближение берем левую границу отрезка

	while (f(xn) - xn >= eps) { // пока не добьемся нужной точности крутимся в цикле
		xn = f(xn);
	}
	cout << setprecision(6) << fixed << xn; // выводим корень с фиксированной точностью


	return 0;
}