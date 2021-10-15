#pragma once
#include<string>
using std::string;
class Car
{
private:
	string number;//Переменная для хранения номера машины
	string mark;//Переменная для хранения марки машины
	string color;//Переменная для хранения цвета машины
	bool isPark;//Переменная для определения состояния припарковонности машины
public:
	Car();//Конструктор по умолчанию
	Car(string number, string mark, string color);//Конструктор для инициализации полей класса
	string getNumber();//Геттер переменной number
	string getMark();//Геттер переменной mark
	string getColor();//Геттер переменной color
	bool getIsPark();//Геттер переменной isPark
	void park();//Метод парковки автомобиля
	void leave();//Метод выезда автобобиля с парковки
};

