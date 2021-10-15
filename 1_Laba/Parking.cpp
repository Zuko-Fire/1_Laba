#include "Parking.h"
#include "Car.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int Parking::IsCreate_and_index(string number)
{
	try {
		for (int i = 0; i < number_arrey_element; i++)
		{
			if (cars[i].getNumber() == number)
				throw i;
		}
	}
	catch(int b)
	{
		return b;
	}
	return -1;
}
bool Parking::add_new_car_toParking(string number, string mark, string color)
{
	if (IsCreate_and_index(number)!=-1)

		return false;

	else
	{
		Car car(number, mark, color);
		cars[number_arrey_element] = car;
		number_arrey_element++;
		return true;
	}
}
bool Parking::is_parked(string number)
{
	int create = IsCreate_and_index(number);
	if (create != -1)
		return cars[create].getIsPark();
	else
		return false;
}
bool Parking::park_car(string number)
{
	try
	{
		int create = IsCreate_and_index(number);
		if (create == -1)throw false;
		if (cars[create].getIsPark())throw false;
		cars[create].park();
		return true;			
	}
	catch(bool b)
	{
		return b;
	}
}
bool Parking::leave_car(string number)
{
	try
	{
		int create = IsCreate_and_index(number);
		if (create == -1)throw false;
		if (!cars[create].getIsPark())throw false;
		cars[create].leave();
		return true;
	}
	catch (bool b)
	{
		return b;
	}
}
void Parking::all_cars_parking()
{
	int counter = 0;
	for (int i = 0; i < number_arrey_element; i++)
	{
		if (cars[i].getIsPark()) {
			cout << cars[i].getNumber() << " " << cars[i].getMark() << " " << cars[i].getColor() << endl;
			counter++;
		}
	}
	if(counter == 0)
	{
		cout << "Parking is empty!" << endl;
	}
}
Parking::~Parking()
{
	delete[] cars;
	cout << "delete cars arrey" << endl;
}
