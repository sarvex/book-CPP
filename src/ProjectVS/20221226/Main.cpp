/*
* Требования к программному коду:
* 1. Указываете свое ФИО
* 2. Группа и учебный год
* 3. Версия языка C++ - 20
* 4. Версия языка C - 18
*/

#include <iostream> // Intpu and output
#include <cmath> // Math

int main()
{
    setlocale(LC_ALL, "Ru-ru"); // Russian language is on

    // Однострочный комментарий
    /*
    * Многострочный комментарий
    */
    std::cout << "26 декабря 2022\n" << std::endl; // Выводим строку

    // Выводим символьные переменные
    char symbolA = 'H';
    wchar_t symbolB = 'e'; // Расширенные диапазон символов
    std::cout << "Символ А = " << symbolA << ", размер = " << sizeof(symbolA) << std::endl; // Для символов используем wcout
    std::cout << "Символ B = " << (char)symbolB << ", размер = " << sizeof(symbolB) << std::endl; // Преобразование в char

    std::cout << std::endl;

    // Unicode-символы, которые преобразовываются в обычный char
    char16_t symbolC = 'l';
    char32_t symbolD = 'o';
    std::cout << "Символ C = " << (char)symbolC << ", размер = " << sizeof(symbolC) << std::endl;
    std::cout << "Символ D = " << (char)symbolD << ", размер = " << sizeof(symbolD) << std::endl;

    // Целочисленные переменные
    short int numberA = -100;
    unsigned short int numberB = 100;
    int numberC = -350;
    unsigned int numberD = 760;
    long numberE = -870;
    unsigned long numberF = 475;
    long long numberG = 899;

    // Числа с плавающей частью
    float numberX = -10.99;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    // Авто-определение типа переменной
    auto numberSeven = 900;

    std::cout << std::endl;

    std::cout << "Число A = " << numberA << ", размер = " << sizeof(numberA) << std::endl;
    std::cout << "Число B = " << numberB << ", размер = " << sizeof(numberB) << std::endl;
    std::cout << "Число C = " << numberC << ", размер = " << sizeof(numberC) << std::endl;
    std::cout << "Число D = " << numberD << ", размер = " << sizeof(numberD) << std::endl;

    std::cout << std::endl;

    std::cout << "Число E = " << numberE << ", размер = " << sizeof(numberE) << std::endl;
    std::cout << "Число F = " << numberF << ", размер = " << sizeof(numberF) << std::endl;
    std::cout << "Число G = " << numberG << ", размер = " << sizeof(numberG) << std::endl;

    std::cout << std::endl;

    std::cout << "Число X = " << numberX << ", размер = " << sizeof(numberX) << std::endl;
    std::cout << "Число Y = " << numberY << ", размер = " << sizeof(numberY) << std::endl;
    std::cout << "Число Z = " << numberZ << ", размер = " << sizeof(numberZ) << std::endl;
    std::cout << "Число numberSeven = " << numberSeven << ", размер = " << sizeof(numberSeven) << std::endl;

    std::cout << std::endl;

    std::cout << "Фукнция abs от numberA = " << std::abs(numberA) << std::endl;
    std::cout << "Фукнция fmod от numberB и numberC = " << std::fmod(numberB, numberC) << std::endl;
    std::cout << "Фукнция remainder от numberD и numberE = " << std::fmod(numberD, numberE) << std::endl;
    std::cout << "Фукнция lerp от numberF, numberG, numberA = " << std::lerp(numberF, numberG, numberA) << std::endl;
    std::cout << "Фукнция log1pl от numberZ = " << std::log1pl(numberZ) << std::endl;
    std::cout << "Фукнция hypotl от numberX, numberZ = " << std::hypotl(numberX, numberZ) << std::endl;
    std::cout << "Фукнция atan2l от numberZ, numberY = " << std::atan2l(numberZ, numberY) << std::endl;
    std::cout << "Фукнция atanhl от numberZ = " << std::atanhl(numberZ) << std::endl;
    std::cout << "Фукнция lgammaal от numberZ = " << std::lgammal(numberZ) << std::endl;
    std::cout << "Фукнция tgammal от numberZ = " << std::tgammal(numberZ) << std::endl;
    std::cout << "Фукнция betal от numberZ = " << std::betal(numberY, numberZ) << std::endl;
    std::cout << "Фукнция assoc_legendrel от numberY, numberZ, numberX = " << std::assoc_legendrel(numberY, numberZ, numberX) << std::endl;
    std::cout << "Фукнция sph_neumannl от numberY, numberZ, numberX = " << std::sph_neumannl(numberY, numberZ) << std::endl;

    std::cout << std::endl;
    std::cout << "Вычисления закончены!" << std::endl;
    std::cout << std::endl;

    system("pause");
}