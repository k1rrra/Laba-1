// ������������ ������ � 5
// ������� 1

#include <iostream>
#include <time.h>

using namespace std;

/* �������� ���������� ������� � ������� ������� ��������� ����� */
void create_arr(char arr[20][60], int n, int m) {
	char c;				
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			c = rand() % 10 + '0';
			// ����������� ����������� ������ �������� ������ � 0
			if (j == 0 && c == '0') {
				j--;
				continue;
			}
			arr[i][j] = c;
		}
}

/* ������������ �������� ������. �� ���� ������� ��������� ������ �� ���������� ������� */
void form_row(char arr[60]) {
	cout << "(";

	for (int i = 0; i < 60; i++) {
		// ������ '0' ��������� ','
		// ���� ���������� ������ ��� �� ��� '0', �� ����� ',' ������������
		// ���� ��������������� ��������� ������ �������, �� ',' �� ���������
		// ����� ��������� �����
		if (arr[i] == '0') {
			if (arr[i - 1] == '0') continue;
			else if (i == 59) continue;
			else cout << ',';
		} else cout << arr[i];
	}

	cout << ")" << endl;
}

/* ����� ���������� ������� � ������� */
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

	cout << "������� ���������� �������� �����" << endl;
	cout << "N: ";
	cin >> n;
	m = 60;
	// ����� ������� �������� ���������� �������
	create_arr(arr, n, m);

	cout << endl;
	
	// ����� ������� ������ ���������� ������� � �������
	print_arr(arr, n, m);

	cout << endl;

	// ������ ������� ������ �������� ������
	for (int i = 0; i < n; i++)
		form_row(arr[i]);
}