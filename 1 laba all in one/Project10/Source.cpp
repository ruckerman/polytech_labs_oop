//1 лабораторная по ООП
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "Source.h"

using namespace std;

void lab1(){
	float gallons, cufeet;

	cout << "1.Перевод из галлонов в кубические фунты\nВведите объем в галлонах: ";
	cin >> gallons;
	cufeet = gallons / 7.481;
	cout << "Эквивалент в кубических метрах равен " << cufeet << endl;
}

void lab2(){
	cout << "2.Вывод заданной таблицы\n"<< 1990 << setw(8) << 135 << endl
		<< 1991 << setw(8) << 7290 << endl
		<< 1992 << setw(8) << 11300 << endl
		<< 1993 << setw(8) << 16200 << endl;
}

void lab3() {
	int var = 10;

	cout << "3.Изменение числа 10\n"<< var << endl;
	var *= 2;
	cout << var-- << endl;
	cout << var << endl;
}

void lab4(){
	cout << "4.Стихотворение \n  Бруклинский мост \nИздай, Кулидж,\nрадостный клич!\nНа хорошее\n" <<
		setw(25) << "и мне не жалко слов." << "\nОт похвал\n" << setw(12) << "красней,\n" <<
		setw(22) << "как флага нашего\n" << setw(20) << "материйка," << "\nхоть вы\n" << setw(22) << "и разъюнайтед стетс\n" <<
		setw(12) << "оф" << "\nАмерика.\nКак в церковь\n" << setw(11) << "идет\n" << setw(25) << "помешавшийся верующий," << "\nкак в скит\n" <<
		setw(17) << "удаляется,\n" << setw(27) << "строг и прост,\n" << setw(40) << "В.Маяковский";
}

void lab5(){
	char a;
	cout << "Заглавная буква\nВведите символ: ";
	cin >> a;
	cout << islower(a) << endl;
}

void lab6(){
	float dollar, sterling, frank, mark, yen;

	cout << "Перевод долларов в другие валюты\nВведите колличество USD: ";
	cin >> dollar;
	sterling = dollar * 1.487;
	frank = dollar * 0.172;
	mark = dollar * 0.584;
	yen = dollar * 0.0095;
	cout << "\nGBP = " << sterling << "\nFRF = " << frank << "\nDEM = " << mark << "\nJPY = " << yen << endl;
}

void lab7(){
	float cel, far;

	cout << "Перевод температуры \nВведите температуру в °С: ";
	cin >> cel;
	far = cel * 5 / 9 + 32;
	cout << "\nЭквивалент в фаренгейтах = " << far << endl;
}

void lab8(){
	cout << "Табулция \nMoscow" << setfill('.') << setw(14) << "8425785" << endl;
}

void lab9(){
	int a, b, c, d;

	cout << "Перевод дроби \nEnter a b c d: ";
	cin >> a >> b >> c >> d;
	printf_s("%d/%d+%d/%d=(%d*%d+%d*%d)/(%d*%d)", a, b, c, d, a, d, b, c, b, d);
}

void lab10(){
	float newfunt, funt, shilling, pens;
	cout << "Старые фунты в новые\nВведите колличество фунтов: ";
	cin >> funt;
	cout << "\nВведите колличество стерлингов: ";
	cin >> shilling;
	cout << "\nВведите колличество пенсов: ";
	cin >> pens;
	newfunt = funt + ((shilling * 12 + pens) / 240);
	cout << "Эквивалент в новых фунтах = " << newfunt << " " << char(156) << endl;
}

void lab11(){
	cout << setiosflags(ios::left) << setw(12) << "Фамилия" << setw(12) << "Имя" << setw(14) << "Адрес" << setw(14) << "Город" << endl
		<< setiosflags(ios::left) << setw(12) << "Петров" << setw(12) << "Василий" << setw(14) << "Кленовая 16" << setw(14) << "Санкт-Петербург" << endl
		<< setiosflags(ios::left) << setw(12) << "Иванов" << setw(12) << "Сергей" << setw(14) << "Осиновая 3" << setw(14) << "Находка" << endl
		<< setiosflags(ios::left) << setw(12) << "Сидоров" << setw(12) << "Иван" << setw(14) << "Березовая 21" << setw(14) << "Калининград" << endl;
}

void lab12(){
	float   decpounds, pounds, shilling, penny, decfrac;
	cout << "\nEnter value of funts: "; cin >> decpounds;
	pounds = static_cast<int>(decpounds);
	decfrac = decpounds - pounds;
	shilling = decfrac * 20;
	penny = static_cast<int>(shilling);
	decfrac = static_cast<int>((shilling - penny) * 10);
	cout << "Equivalent in old funts = " << pounds << "." << penny << "." << decfrac << endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Список программ:\n1.Перевод из галлонов в кубические фунты\n2.Вывод заданной таблицы"
		"\n3.Изменение числа 10\n4.Стихотворение \n5.Заглавная буква \n6.Перевод долларов в другие валюты"
		"\n7.Перевод температуры \n8.Табулция \n9.Перевод дроби \n10.Старые фунты в новые\n11.Левосторонее форматирование"
		"\n12.Новые фунты в старые\n";//меню выбора
	int a = 1;// условие возврата в меню выбора
	while (a == 1)
	{
		cout << "Введиде код нужной программы: ";
		char kod[2];
		int intkod;
		cin >> kod;
		if ( ( (int)kod[0] - 48 >= 1 & (int)kod[0] - 48 <= 9 & kod[1] == 0 ) || ( (int)kod[0] - 48 == 1 & (int)kod[1] - 48 >= 0 & (int)kod[1] - 48 <= 2 ) )
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