#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

struct Car
{
    double length;
    double clearance;
    double engineVolume;
    int power;
    double wheelDiameter;
    string color;
    string gearbox;
};


void setValues(Car& car)
{
    cout << "Введіть довжину автомобіля (м): ";
    cin >> car.length;

    cout << "Введіть кліренс (см): ";
    cin >> car.clearance;

    cout << "Введіть об'єм двигуна (л): ";
    cin >> car.engineVolume;

    cout << "Введіть потужність двигуна (к.с.): ";
    cin >> car.power;

    cout << "Введіть діаметр коліс (дюйми): ";
    cin >> car.wheelDiameter;

    cout << "Введіть колір автомобіля: ";
    cin >> car.color;

    cout << "Введіть тип коробки передач: ";
    cin >> car.gearbox;
}


void showValues(Car car)
{
    cout << "\n--- Інформація про автомобіль ---\n";
    cout << "Довжина: " << car.length << " м" << endl;
    cout << "Кліренс: " << car.clearance << " см" << endl;
    cout << "Об'єм двигуна: " << car.engineVolume << " л" << endl;
    cout << "Потужність: " << car.power << " к.с." << endl;
    cout << "Діаметр коліс: " << car.wheelDiameter << " дюймів" << endl;
    cout << "Колір: " << car.color << endl;
    cout << "Коробка передач: " << car.gearbox << endl;
}


void searchValues(Car car)
{
    int choice;

    cout << "----------------------------------------- Пошук автомобіля -----------------------------------------" << endl;
    cout << "1 - За кольором"<< endl;
    cout << "2 - За об'ємом двигуна"<<endl;
    cout << "3 - За потужністю двигуна"<<endl;
    cout << "4 - За типом коробки передач"<<endl;
    cout << "Ваш вибір: ";
    cin >> choice;

    if (choice == 1)
    {
        string color;
        cout << "Введіть колір для пошуку: ";
        cin >> color;

        if (car.color == color)
            cout << "Автомобіль знайдено!" << endl;
        else
            cout << "Автомобіль не знайдено." << endl;
    }
    else if (choice == 2)
    {
        double volume;
        cout << "Введіть об'єм двигуна: ";
        cin >> volume;

        if (car.engineVolume == volume)
            cout << "Автомобіль знайдено!" << endl;
        else
            cout << "Автомобіль не знайдено." << endl;
    }
    else if (choice == 3)
    {
        int power;
        cout << "Введіть потужність двигуна: ";
        cin >> power;

        if (car.power == power)
            cout << "Автомобіль знайдено!" << endl;
        else
            cout << "Автомобіль не знайдено." << endl;
    }
    else if (choice == 4)
    {
        string gearbox;
        cout << "Введіть тип коробки передач: ";
        cin >> gearbox;

        if (car.gearbox == gearbox)
            cout << "Автомобіль знайдено!" << endl;
        else
            cout << "Автомобіль не знайдено." << endl;
    }
    else
    {
        cout << "Неправильний вибір!" << endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car car;
    int choice;

    do
    {
        cout << "----------------------------------------- МЕНЮ -----------------------------------------"<< endl;
        cout << "1 - Ввести дані автомобіля"<< endl;
        cout << "2 - Показати дані автомобіля"<< endl;
        cout << "3 - Пошук значень" << endl;
        cout << "0 - Вихід"<< endl;
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            setValues(car);
            break;

        case 2:
            showValues(car);
            break;

        case 3:
            searchValues(car);
            break;

        case 0:
            cout << "Завершення програми." << endl;
            break;

        default:
            cout << "Неправильний вибір!" << endl;
        }

    } while (choice != 0);

    return 0;
}