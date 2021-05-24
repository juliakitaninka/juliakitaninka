

#include <fstream> // библиотека для работы с файлами
#include <iostream> // библиотека для ввода-вывода	
#include <string> // библиотека для работы со строками
#include <conio.h> // библиотека для ветвления
#include <windows.h> // библиотека для работы с консолью

using namespace std;
class SKH {
public:
	string reading; // переменная для чтения 
	string recording; // переменная для записи
	void request(int& i) {
		ifstream zaya; // переменная для чтения файла
		ofstream zayaof; // переменная для записи в файл
		if (i == 1) { goto start; }
		zayaof.open("Заявки.txt", ios_base::app); // сама запись в файл, ios_base::app означает что мы не перезаписываем, а дописываем
		cout << "Адрес:";
		getline(cin, recording); // запись всей строки
		zayaof << "Адрес:" << recording << endl;
		cout << "Квартира:";
		getline(cin, recording);
		zayaof << "Квартира:" << recording << endl;
		cout << "Тип ремонта:";
		getline(cin, recording);
		zayaof << "Тип ремонта:" << recording << endl;
		cout << "Желаемый рабочий:";
		getline(cin, recording);
		zayaof << "Желаемый рабочий:" << recording << endl;
		zayaof << "-------------------------------------------------" << endl;
		return;
	start:
		zaya.open("Заявки.txt");
		if (zaya.is_open()) // открытие и просмотр всего файла
		{
			while (getline(zaya, reading))
			{
				cout << reading << endl;
			}
			cout << endl;
			zaya.close();
			return;
		}
	}
	void worker(int& i) {
		ifstream work;
		ofstream workof;
		if (i == 1) { goto start; }
		else {
			workof.open("worker.txt", ios_base::app);
			cout << "ФИО работника:";
			getline(cin, recording);
			workof << "ФИО работника:" << recording << endl;
			cout << "Специализация:";
			getline(cin, recording);
			workof << "Специализация:" << recording << endl;
			workof << "-------------------------------------------------" << endl;
			return;
		start:
			work.open("worker.txt");
			if (work.is_open())
			{
				while (getline(work, reading))
				{
					cout << reading << endl;
				}
				cout << endl;
				work.close();
				return;
			}
		}
	}
	void houseH(int& i) {
		ifstream house;
		ofstream houseof;
		if (i == 1) { goto start; }
		else {
			houseof.open("ХарактеристикаДома.txt", ios_base::app);
			cout << "Адрес дома: ";
			getline(cin, recording);
			houseof << "Адрес:" << recording << endl;
			cout << "Характеристика дома:";
			getline(cin, recording);
			houseof << "Характеристика:" << recording << endl;
			houseof << "-------------------------------------------------" << endl;
			return;
		}
	start:
		house.open("ХарактеристикаДома.txt");
		if (house.is_open())
		{
			while (getline(house, reading))
			{
				cout << reading << endl;
			}
			cout << endl;
			house.close();
			return;
		}
	}
	void typeH(int& i) {
		ifstream type;
		ofstream typeof;
		if (i == 1) { goto start; }
		else {
			typeof.open("ТипРемотныхРабот.txt", ios_base::app);
			cout << "Адрес дома: ";
			getline(cin, recording);
			typeof << "Адрес:" << recording << endl;
			cout << "Тип ремонтных работ:";
			getline(cin, recording);
			typeof << "Тип ремонтных работ:" << recording << endl;
			typeof << "-------------------------------------------------" << endl;
			return;
		}
	start:
		type.open("ТипРемотныхРабот.txt");
		if (type.is_open())
		{
			while (getline(type, reading))
			{
				cout << reading << endl;
			}
			cout << endl;
			type.close();
			return;
		}
	}
	void factW(int& i) {
		ifstream fact;
		ofstream factof;
		if (i == 1) { goto start; }
		else {
			factof.open("ФактРабот.txt", ios_base::app);
			cout << "Адрес дома: ";
			getline(cin, recording);
			factof << "Адрес:" << recording << endl;
			cout << "Квартира:";
			getline(cin, recording);
			factof << "Квартира:" << recording << endl;
			cout << "Факт ремотных работ:";
			getline(cin, recording);
			factof << "Факт ремотных работ:" << recording << endl;
			factof << "-------------------------------------------------" << endl;
			return;
		}
	start:
		fact.open("ФактРабот.txt");
		if (fact.is_open())
		{
			while (getline(fact, reading))
			{
				cout << reading << endl;
			}
			cout << endl;
			fact.close();
			return;
		}
	}
	void planW(int& i) {
		ifstream plan;
		ofstream planof;
		if (i == 1) { goto start; }
		else {
			planof.open("ПланРабот.txt", ios_base::app);
			cout << "Адрес дома: ";
			getline(cin, recording);
			planof << "Адрес:" << recording << endl;
			cout << "Квартира:";
			getline(cin, recording);
			planof << "Квартира:" << recording << endl;
			cout << "План ремонтных работ:";
			getline(cin, recording);
			planof << "План ремонтных работ:" << recording << endl;
			planof << "-------------------------------------------------" << endl;
			return;
		}
	start:
		plan.open("ПланРабот.txt");
		if (plan.is_open())
		{
			while (getline(plan, reading))
			{
				cout << reading << endl;
			}
			cout << endl;
			plan.close();
			return;
		}
	}
};
int main()
{
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251(нужно для того, чтобы записывать и читать с файла русские символы)
	SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251.
	setlocale(LC_ALL, "rus"); // русский язык в самой консоли
	SKH sh; 
	int i; // переменная нужная для перехода на код с записью или чтением
	cout << "-------------------------------------------------" << endl;
	cout << "Вход в систему" << endl;
	cout << "Здравствуйте, диспетчер" << endl;
	cout << "-------------------------------------------------" << endl;
start:
	while (1 == 1)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "a - запись" << endl;
		cout << "b - чтение" << endl;
		cout << "-------------------------------------------------" << endl;
		switch (_getch()) // ветвление, в зависимости от ввода пользователя
		{
		case 'a': case 'A':
			i = 0;
			goto choise;
		case 'b': case 'B':
			i = 1;
			goto choise;
		default: printf("Ошибка, возможно установлен русский язык \n"); goto start;
		}
	choise:
		cout << "-------------------------------------------------" << endl;
		cout << "a - дома(характеристика)" << endl;
		cout << "b - типы ремонтных работ" << endl;
		cout << "c - план ремонтных работ" << endl;
		cout << "d - факт ремонтных работ" << endl;
		cout << "e - рабочие" << endl;
		cout << "g - заявки на ремонт" << endl;
		cout << "-------------------------------------------------" << endl;
		switch (_getch()) {
		case 'a': case 'A':
			sh.houseH(i);
			break;
		case 'b': case 'B':
			sh.typeH(i);
			break;
		case 'c': case 'C':
			sh.planW(i);
			break;
		case 'd': case 'D':
			sh.factW(i);
			break;
		case 'g': case 'G':
			sh.request(i);
			break;
		case 'e': case 'E':
			sh.worker(i);
			break;
		default: printf("Ошибка, возможно установлен русский язык \n");
			break;
		}
	}
	return 0;
}