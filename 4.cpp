#include<iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "russian");			// ����������� ����������� ��������� � �������
	srand(time(NULL));							
	int arr[100];				// ������ ��� ��������� ��������
	int n;						// ����������� �������
	int k;						// ����� �������� ��� ��������
	int m;						// ����������� ������� ����� �������� �������� � ���������� 0

	/* ������������ ������� � ������� ������� ��������� ����� */
	cout << "������� ������� ������� N (�� ����� 50): ";
	cin >> n;

	cout << "������:" << endl;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl << endl;

	/* �������� �������� � ������� K � ����� �������� */
	cout << "�������� �������� � ������� K.." << endl;
	cout << "������� K: ";
	cin >> k;
	for (int i = k - 1; i < n - 1; i++)
		arr[i] = arr[i + 1];
	arr[n] = 0;
	n--;
	
	/* ���������� 0 ����� ������� ������� �������� ������� */
	// ������� ���������� ��������� ������� ����� ���������� 0
	m = n;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == 0) m++;
	cout << "���������� 0 ����� ������� ������� ��������.." << endl << endl;
	// ����� ������� � �����. ���� ������� ������� ������, �� ������������ ���������� 0,
	//		� ����� ���� �������, ����� ������ ���������� �������. ��� ���� ���������������
	//		�� �������������
	for (int i = m - 1, j = n - 1; j >= 0 && i >= 0; i--, j--) {
		if (arr[j] % 2 == 0 && j >= 0) {
			arr[i] = 0;
			i--;
			arr[i] = arr[j];
		} else {
			arr[i] = arr[j];
		}
	}
	n = m;		// ����� ����������� ������������� � ������ ����������
	
	/* ����� ��������� ������� */
	cout << "���������:" << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}