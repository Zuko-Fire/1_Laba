

#include <iostream>
#include "Car.h"
#include "Parking.h"
//#include "Vld.h"
using std::cin;
using std::cout;
using std::endl;
int main()
{
    system("chcp 1251");
    Parking parking;
    while (true) {
        int i = 0;
        cout << "1.Внести новую машину в базу данных парковки, и припорковать" << endl;
        cout << "2.Припорковать машину имеющиюся в базе" << endl;
        cout << "3.Выезд машины с парковки" << endl;
        cout << "4.Проверить припаркована ли машина" << endl;
        cout << "5.Вывести все припаркованные машины" << endl;
        cout << "6.Завершить работу программы" << endl;
        cin >> i;
        switch (i)
        {
        case(1):
        {
            string number, mark, color;
            cout << "Введите номер, марку и цвет через пробел"<<endl;
            cin >> number >> mark >> color;
            if (parking.add_new_car_toParking(number, mark, color))
                cout << "Машина успешно внесена в базу и припаркована" << endl;
            else
                cout << "Машина уже создана!" << endl;
            break;
        }
        case(2): {
            cout << "Введите номер машины" << endl;
            string number;
            cin >> number;
            if (parking.park_car(number))
                cout << "Машина припаркована" << endl;
            else
                cout << "Прозошла какае - то ошибка, проверьте вводимые данные" << endl;
            break;
        }
        case(3):
        {
            cout << "Введите номер машины" << endl;
            string number;
            cin >> number;
            if (parking.leave_car(number))
                cout << "Машина выехала с парковки" << endl;
            else
                cout << "Прозошла какае - то ошибка, проверьте вводимые данные" << endl;
            break;
        }
        case(4):
        {
            cout << "Введите номер машины" << endl;
            string number;
            cin >> number;
            if (parking.is_parked(number))
                cout << "Машина припаркована" << endl;
            else
                cout << "Машина не припаркована" << endl;
            break;
        }
        case(5):
        {
            parking.all_cars_parking();
            break;
        }
        case(6):
        {   
           
            return 0;
        }

        }
    }
}