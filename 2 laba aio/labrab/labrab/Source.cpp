#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

using namespace std;


void lab1() {
	int a;
	cout << "Введите число ";
	cin >> a;
	int koef = 1;
	for (int i = 1; i < 21; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			cout << setiosflags(ios::left) << setw(7) << a * koef; 
			koef += 1;
		}
		cout << endl;
	}
}

void lab2() {
	float cel, far;
	int kod;
	cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта.\n2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
	cin >> kod;
	switch (kod)
	{
	    case 1:
		{
			cout << "Введите значение по Цельсию: "; cin >> cel;
			far = cel * 1.8 + 32;
			cout << "Значение по Фаренгейту: " << far << endl;
			break;
		}
		case 2:
		{
			cout << "Введите значение по Фаренгейту: "; cin >> far;
			cel = (far - 32.0) * (5.0 / 9.0);
			cout << "Значение по Цельсию: " << cel << endl;
			break;
		}
	    default:
	    {
	    	cout << "Неправильный код\n";
	    	break;
	    }
	}
}

//исправить 3 задание
void lab3() {
	/*char ch;
	unsigned long total = 0;          //this holds the number

	cout << "\nEnter a number: ";
	while ((ch = getche()) != '\r')    //quit on Enter
		total = total * 10 + ch - '0';     //add digit to total*10
	cout << "\nNumber is: " << total << endl;*/

}

void lab4() {
	double n1, n2, ans;
	char oper, ch;

	do {
		cout << "\nEnter first number, operator, second number: ";
		cin >> n1 >> oper >> n2;
		switch (oper)
		{
		case '+': { ans = n1 + n2;  break;
		}
		case '-': { ans = n1 - n2;  break;
		}
		case '*': { ans = n1 * n2;  break;
    	}
		case '/': { ans = n1 / n2;  break;
        }
		default: { ans = 0; }
		}
		cout << "Answer = " << ans;
		cout << "\nDo another (Enter 'y' or 'n')? ";
		cin >> ch;
	} while (ch != 'n');

}

void lab5() {
	for (int i = 0; i < 20; i++) 
	{
		cout <<  setw(20 - i)<< setfill(' ');
		for (int j = 0; j <= i; j++)
		{
			cout << "X";
		}
		cout << endl;
	}
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

	cout << "Список программ:\n1.Таблица умножения на заданное число \n2.Перевод температуры"
		"\n3. \n4. \n5. \n6."
		"\n7. \n8. \n9. \n10. \n11. "
		"\n12. \n";//текст меню
	int a = 1;// флаг меню
	// меню организовано циклом while
	while (a == 1)
	{
		cout << "Введиде код нужной программы: ";
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
			cout << "Для продолжения введите 1, для выхода любой символ.\n";
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
			cout << "Неверный код, повторите попытку." << endl;
		}
	} 
	return 0;
}