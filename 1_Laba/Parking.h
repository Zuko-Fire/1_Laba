#pragma once
#include <string>
#include "Car.h"

using std::string;
class Parking
{
private:
	int number_arrey_element;//���������� ��� �������� ����������� ���������� � �������
	Car *cars = new Car[5];//������������ ������ ��� �������� ���� Car
	int IsCreate_and_index(string number);//����� ��� �������� - ����� �� ��� � ���� ����� ������ � �������� ������� � �������
public:
	bool add_new_car_toParking(string number, string mark, string color);//����� ��� ���������� � �������� �� ��������� � ���� ����������
	bool park_car(string number);//����� ��� ��������� � �������� �������� � ���� ������
	bool leave_car(string number);//����� ��� ��������� � ������ �������� � ���� ������
	bool is_parked(string number);//����� ��� �������� �� ����� �� ��������������� ������
	void all_cars_parking();//����� ��������� ��� �������, � ������ �����, �� ������� ������
	~Parking();//����������
};

