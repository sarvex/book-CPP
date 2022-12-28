/*
* Требования к программному коду:
* 1. Указываете свое ФИО
* 2. Группа и учебный год
* 3. Версия языка C++ - 20
* 4. Версия языка C - 18
*/

#include <iostream>
#include <cmath>
#include <numeric> // https://en.cppreference.com/w/cpp/numeric
#include "Sum.h"

int main()
{
    setlocale(LC_ALL, "Ru-ru");

    std::cout << "28 декабря 2022\n" << std::endl;

    short int numberA = -100;
    unsigned short int numberB = 100;
    int numberC = -350;
    unsigned int numberD = 760;
    long numberE = -870;
    unsigned long numberF = 475;
    long long numberG = 899;

    float numberX = -10.99;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    auto numberSeven = 900;
    
    int c = 10;

    if (c > 10) {
        // Цикл while
        int i = 1;
        while (i < 10)
        {
            std::cout << "while = " << " * " << i << " = " << i * i << std::endl;
            i++;
        }
    }
    else if (c == 10) {
        // Цикл for
        for (int a = 1; a < 10; a++)
        {
            std::cout << "for = " << a << " * " << a << " = " << a * a << std::endl;
        }
    }
    else if (c < 10) {
        // Цикл do-while
        int b = 6;
        do
        {
            std::cout << "do-while = " << b << std::endl;
            b--;
        } while (b > 0);
    }
    else {
        std::cout << "Попробуйте заново" << std::endl;
    }

    switch (c) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    }


    long double resultOfSum = numberSum(numberA, numberB, numberC, numberD);
    std::cout << "Результат сложения чисел = " << resultOfSum;

    std::cout << std::endl;
    std::cout << "Вычисления закончены!" << std::endl;
    std::cout << std::endl;

    system("pause");
}