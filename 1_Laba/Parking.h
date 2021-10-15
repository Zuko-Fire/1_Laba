#pragma once
#include <string>
#include "Car.h"

using std::string;
class Parking
{
private:
	int number_arrey_element;//Переменная для хранения колличества элеменнтов в массиве
	Car *cars = new Car[5];//Динамический массив для объектов типа Car
	int IsCreate_and_index(string number);//Метод для проверки - внесён ли уже в базу номер машины и возврата индекса в массиве
public:
	bool add_new_car_toParking(string number, string mark, string color);//Метод для добавления и парковки не внесённого в базу автомобиля
	bool park_car(string number);//Метод для сообщения о парковке внесённой в базу машины
	bool leave_car(string number);//Метод для сообщения о выезде внесённой в базу машины
	bool is_parked(string number);//Метод для проверки по номер об припаркованноси машины
	void all_cars_parking();//Метод выводящий все стоящие, в данный момет, на паковке машины
	~Parking();//Деструктор
};

