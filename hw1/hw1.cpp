// hw1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <algorithm>
#include <cstdlib>
#include <ctype.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <typeinfo>
#include <fstream>
using namespace std;

class Point {
private:
    float x;
    float y;
    float z;

public:
    float getFull_X() 
    {
        return x; 
    }
    void setFull_X(const float& _x)
    {
        x = _x;
    }

    float getFull_Y() 
    { 
        return y; 
    }
    void setFull_Y(const float& _y) 
    {
        y = _y; 
    }

    float getFull_Z() 
    {
        return z; 
    }
    void setFull_Z(const float& _z) 
    {
        z = _z; 
    }

public:
    void input()
    {
        cout << "Введите x: ";
        cin >> x;
        cout << endl;

        cout << "Введите y: ";
        cin >> y;
        cout << endl;

        cout << "Введите z: ";
        cin >> z;
        cout << endl;
    }

    void display()
    {
        cout << "Координата x: " << x << endl;
        cout << "Координата y: " << y << endl;
        cout << "Координата z: " << z << endl;
    }

    void save_txt()
    {
        ofstream text_xyz("file.txt");
        cout << "Данные сохранены в файл" << endl;
        text_xyz << "Координата x: " << x << endl << "Координата y: " << y << endl << "Координата z: " << z << endl;
        text_xyz.close();
    }

    void display_txt()
    {
        string temp;
        ifstream read_text_xyz("file.txt");
        cout << "Все данные в файле на текущий момент:" << endl;
        
        if (read_text_xyz.is_open())
        {
            while (getline(read_text_xyz, temp))
            {
                cout << temp << endl;
            }
        }
    }
};

class Decimal
{
public:
    float a;
    float b;

    void data()
    {
        cout << "Введите а: ";
        cin >> a;

        cout << "Введите b: ";
        cin >> b;
    }

    void add()
    {
        cout << a << " + " << b << " = " << a+b << endl;
    }

    void sub()
    {
        cout << a << " - " << b << " = " << a - b << endl;
    }

    void mult()
    {
        cout << a << " * " << b << " = " << a * b << endl;
    }

    void div()
    {
        cout << a << " / " << b << " = " << a / b << endl;
    }
};

int main() {
    setlocale(LC_ALL, "ru");

    // 1
    //Реализуйте класс Точка.
    //Необходимо хранить координаты x, y, z в переменных-членах класса.
    //Реализуйте функции-члены класса для ввода данных, вывода данных,
    //реализуйте аксессоры для доступа к переменным-членам, реализуйте
    //сохранение в файл и загрузку данных из файла.

    Point point = Point();

    point.input();
    point.display();
    point.save_txt();
    point.display_txt();

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //2
    //Реализуйте класс Дробь.Необходимо хранить числитель и знаменатель в качестве переменных - членов.
    // Реализуйте функции - члены для ввода данных в переменные - члены, для выполнения арифметических операций
    // (сложение, вычитание, умножение, деление, и т.д.)

   /* Decimal decimal = Decimal();
    int menu;

    decimal.data();

    cout << "Какую операцию вы хотите выполнить?" << endl;
    cout << "1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление" << endl;
    cin >> menu;

    switch (menu)
    {
        case 1:
        {
            decimal.add();
            break;
        }
        case 2:
        {
            decimal.sub();
            break;
        }
        case 3:
        {
            decimal.mult();
            break;
        }
        case 4:
        {
            decimal.div();
            break;
        }
        default:
        {
            cout << " Ошибка ввода!";
            break;
        }
    }*/
}












