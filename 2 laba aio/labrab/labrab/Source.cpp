#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;


void lab1() {
	
}

void lab2() {
	
}

void lab3() {

}

void lab4() {
	
}

void lab5() {
	
}

void lab6() {
	
}

void lab7() {
	
}

void lab8() {
	
}

void lab9() {
	
}

void lab10() {
	
}

void lab11() {
	
}

void lab12() {
	
}

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "������ ��������:\n1.������� �� �������� � ���������� �����\n2.����� �������� �������"
		"\n3.��������� ����� 10\n4.������������� \n5.��������� ����� \n6.������� �������� � ������ ������"
		"\n7.������� ����������� \n8.�������� \n9.������� ����� \n10.������ ����� � �����\n11.������������ ��������������"
		"\n12.����� ����� � ������\n";//����� ����
	int a = 1;// ���� ����
	// ���� ������������ ������ while
	while (a == 1)
	{
		cout << "������� ��� ������ ���������: ";
		char kod[2];
		int intkod;
		cin >> kod;
		if (((int)kod[0] - 48 >= 1 & (int)kod[0] - 48 <= 9 & kod[1] == 0) || ((int)kod[0] - 48 == 1 & (int)kod[1] - 48 >= 0 & (int)kod[1] - 48 <= 2))
		{
			if (((int)kod[1] - 48 >= 0) & ((int)kod[1] - 48 < 3) & ((int)kod[0] - 48 == 1))
			{
				intkod = static_cast<int>(kod[1]) - 48;
				intkod = 10 + intkod;
				switch (intkod) {
				case 10: {
					lab10(); break;
				}
				case 11: {
					lab11(); break;
				}
				case 12: {
					lab12(); break;
				}
				}
			}


			if (kod[1] == 0) {
				intkod = static_cast<int>(kod[0]) - 48;
				switch (intkod) {
				case 1: {
					lab1(); break;
				}
				case 2: {
					lab2(); break;
				}
				case 3: {
					lab3(); break;
				}
				case 4: {
					lab4(); break;
				}
				case 5: {
					lab5(); break;
				}
				case 6: {
					lab6(); break;
				}
				case 7: {
					lab7(); break;
				}
				case 8: {
					lab8(); break;
				}
				case 9: {
					lab9(); break;
				}
				}
			}
			cout << "��� ����������� ������� 1, ��� ������ ����� ������.\n";
			char otvet;
			cin >> otvet;
			switch (otvet)
			{
			case '1': {
				a = 1;
				break;
			}
			default: {
				a = 0;
				break;
			}
			}
		}
		else
		{
			cout << "�������� ���, ��������� �������." << endl;
		}
	} 
	return 0;
}