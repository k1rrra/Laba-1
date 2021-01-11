// ������������ ������ � 3
// ������� 1
// y = 3^x

#include<iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main() {
	int n = 10;				// ���������� ��������� ����
	int i;					
	float e = 0.0001;		// �������� ��������
	float a = 0.1;			// ������ ������� ��������� ���������
	float b = 1;			// ������� ������� ��������� ���������
	float h = (b - a) / n;		// ���
	float s, curr;

	cout << "X\t\t SN\t\t SE \t\t Y" << endl;

	// ���� �� ��������� �������� ���������
	for (float x = a; x <= b; x += h) {
		
		// ���������� �������� ������� �� n-�� �������� ��������������� ����
		curr = 1;
		s = curr;
		for (i = 1; i < n; i++) {
			curr = curr * (log(3) * x / i);		// ���������� ���������� �������� ����
			s += curr;
		}
		cout << setiosflags(ios::fixed) << setprecision(6) << x << "\t" << s << "\t";
		//

		// ���������� �������� �������, ���� ��������� �������� ���� �� ���� e
		i = 1;
		curr = 1;
		s = curr;
		while (true) {
			curr = curr * (log(3) * x / i);	
			if (fabs(curr) < e) break;		// ������� ����������� ���������� �����, ������ �������� ������ �������� ��������
			i++;
			s += curr;
		}
		cout << s << "\t" << pow(3, x) << endl;
		//
	}
}