// ������������ ������ �6
// ������� 1
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "russian");		// ����������� ������ ������� �������� � �������
	char input[255];					// �������� ������ ������������ ����� 255 ��������
	char compressed[255];				// ������ ������� �������� ������ ��� �������� � ����� � �����
	cout << "������� ������ ��� �������� �� ���������: ";
	gets_s(input);
	
	// �������� �� �������� ������ ������� � �����
	for (int i = 0, j = 0; i <= 255; i++) {
		if (input[i] != ' ' && input[i] != '.') {
			compressed[j] = input[i];
			j++;
		}
	}

	bool pal = true;					// ����, ��������������� ������ ��� ��������� (true - ���������, false - �� ���������)
	// �������� ��������� �������� ������ ������ �� ����� ������ � ��������. ���� ��������� ����������, �� ������ ����������� �� ���������
	for (int i = 0, j = strlen(compressed) - 1; i < strlen(compressed) / 2; i++, j--) {
		if (compressed[i] != compressed[j]) pal = false;			
	}

	if (pal) cout << "������ ���������";
	else cout << "������ �� ���������";
}