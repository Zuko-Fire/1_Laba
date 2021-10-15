#pragma once
#include<string>
using std::string;
class Car
{
private:
	string number;//���������� ��� �������� ������ ������
	string mark;//���������� ��� �������� ����� ������
	string color;//���������� ��� �������� ����� ������
	bool isPark;//���������� ��� ����������� ��������� ���������������� ������
public:
	Car();//����������� �� ���������
	Car(string number, string mark, string color);//����������� ��� ������������� ����� ������
	string getNumber();//������ ���������� number
	string getMark();//������ ���������� mark
	string getColor();//������ ���������� color
	bool getIsPark();//������ ���������� isPark
	void park();//����� �������� ����������
	void leave();//����� ������ ���������� � ��������
};

