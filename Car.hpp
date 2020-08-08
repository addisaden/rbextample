#pragma once

#include <iostream>

using std::cout;
using std::endl;

class Car
{
    int speed = 0;
    
    public:
    Car()
    {
        this->speed = 0;
        cout << "A new Car is born" << endl;
    }

    ~Car()
    {
        cout << "Good bye my car..." << endl;
    }

    int gas(int additional_speed=30)
    {
        this->speed += additional_speed;
        return this->speed;
    }

    int stop()
    {
        this->speed -= 30;
        return this->speed;
    }
};
