#include "Car.h"
#include<string>
using std::string;
Car::Car() {};
Car::Car(string number, string mark, string color) 
{
	this->number = number;
	this->mark = mark;
	this->color = color;
}
string Car::getNumber()
{
	return number;
}
string Car::getMark()
{
	return mark;
}
string Car::getColor()
{
	return color;
}
bool Car::getIsPark ()
{
	return isPark;
}
void Car::park()
{
	this->isPark = true;
}
void Car::leave()
{
	this->isPark = false;
}