/*
* ���������� � ������������ ����:
* 1. ���������� ���� ���
* 2. ������ � ������� ���
* 3. ������ ����� C++ - 20
* 4. ������ ����� C - 18
*/

#include <iostream> // Intpu and output
#include <cmath> // Math

int main()
{
    setlocale(LC_ALL, "Ru-ru"); // Russian language is on

    // ������������ �����������
    /*
    * ������������� �����������
    */
    std::cout << "26 ������� 2022\n" << std::endl; // ������� ������

    // ������� ���������� ����������
    char symbolA = 'H';
    wchar_t symbolB = 'e'; // ����������� �������� ��������
    std::cout << "������ � = " << symbolA << ", ������ = " << sizeof(symbolA) << std::endl; // ��� �������� ���������� wcout
    std::cout << "������ B = " << (char)symbolB << ", ������ = " << sizeof(symbolB) << std::endl; // �������������� � char

    std::cout << std::endl;

    // Unicode-�������, ������� ����������������� � ������� char
    char16_t symbolC = 'l';
    char32_t symbolD = 'o';
    std::cout << "������ C = " << (char)symbolC << ", ������ = " << sizeof(symbolC) << std::endl;
    std::cout << "������ D = " << (char)symbolD << ", ������ = " << sizeof(symbolD) << std::endl;

    // ������������� ����������
    short int numberA = -100;
    unsigned short int numberB = 100;
    int numberC = -350;
    unsigned int numberD = 760;
    long numberE = -870;
    unsigned long numberF = 475;
    long long numberG = 899;

    // ����� � ��������� ������
    float numberX = -10.99;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    // ����-����������� ���� ����������
    auto numberSeven = 900;

    std::cout << std::endl;

    std::cout << "����� A = " << numberA << ", ������ = " << sizeof(numberA) << std::endl;
    std::cout << "����� B = " << numberB << ", ������ = " << sizeof(numberB) << std::endl;
    std::cout << "����� C = " << numberC << ", ������ = " << sizeof(numberC) << std::endl;
    std::cout << "����� D = " << numberD << ", ������ = " << sizeof(numberD) << std::endl;

    std::cout << std::endl;

    std::cout << "����� E = " << numberE << ", ������ = " << sizeof(numberE) << std::endl;
    std::cout << "����� F = " << numberF << ", ������ = " << sizeof(numberF) << std::endl;
    std::cout << "����� G = " << numberG << ", ������ = " << sizeof(numberG) << std::endl;

    std::cout << std::endl;

    std::cout << "����� X = " << numberX << ", ������ = " << sizeof(numberX) << std::endl;
    std::cout << "����� Y = " << numberY << ", ������ = " << sizeof(numberY) << std::endl;
    std::cout << "����� Z = " << numberZ << ", ������ = " << sizeof(numberZ) << std::endl;
    std::cout << "����� numberSeven = " << numberSeven << ", ������ = " << sizeof(numberSeven) << std::endl;

    std::cout << std::endl;

    std::cout << "������� abs �� numberA = " << std::abs(numberA) << std::endl;
    std::cout << "������� fmod �� numberB � numberC = " << std::fmod(numberB, numberC) << std::endl;
    std::cout << "������� remainder �� numberD � numberE = " << std::fmod(numberD, numberE) << std::endl;
    std::cout << "������� lerp �� numberF, numberG, numberA = " << std::lerp(numberF, numberG, numberA) << std::endl;
    std::cout << "������� log1pl �� numberZ = " << std::log1pl(numberZ) << std::endl;
    std::cout << "������� hypotl �� numberX, numberZ = " << std::hypotl(numberX, numberZ) << std::endl;
    std::cout << "������� atan2l �� numberZ, numberY = " << std::atan2l(numberZ, numberY) << std::endl;
    std::cout << "������� atanhl �� numberZ = " << std::atanhl(numberZ) << std::endl;
    std::cout << "������� lgammaal �� numberZ = " << std::lgammal(numberZ) << std::endl;
    std::cout << "������� tgammal �� numberZ = " << std::tgammal(numberZ) << std::endl;
    std::cout << "������� betal �� numberZ = " << std::betal(numberY, numberZ) << std::endl;
    std::cout << "������� assoc_legendrel �� numberY, numberZ, numberX = " << std::assoc_legendrel(numberY, numberZ, numberX) << std::endl;
    std::cout << "������� sph_neumannl �� numberY, numberZ, numberX = " << std::sph_neumannl(numberY, numberZ) << std::endl;

    std::cout << std::endl;
    std::cout << "���������� ���������!" << std::endl;
    std::cout << std::endl;

    system("pause");
}