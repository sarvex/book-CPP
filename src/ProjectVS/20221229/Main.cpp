/*
* Требования к программному коду:
* 1. Мольганов Андрей Александрович
* 2. IC DOSTI, ЦАТЭК П3Э
* 3. Версия языка C++ - 20
* 4. Версия языка C - 18
* 
* 
* Задание 1: Разобраться с ссылками, const и constexpr, добавить их в свой калькулятор - 80
* 
* Задание 2: Найти ошибку в этом коде, и добавить три алгоритма из библиотеки #include <algorithm> - 100+
*/

#include <iostream>
#include <cmath>


int main() {
	setlocale(LC_ALL, "Ru-ru");

	int varSwitch = 0;

	long double varA = 0.00000;
	long double varB = 0.00000;
	long double varC = 0.00000;
	long double varX = 0.00000;

	long double &varA1 = varA;
	long double &varB1 = varB;
	long double &varC1 = varC;

	std::cout << "Вычислим квадратное уравнение - a*x^2 + b*x + c = 0" << std::endl;
	std::cout << std::endl;
	// varResult1
	std::cout << "Введите значение a: ";
	std::cin >> varA;
	std::cout << "Введите значение b: ";
	std::cin >> varB;
	std::cout << "Введите значение c: ";
	std::cin >> varC;
	std::cout << std::endl;
	std::cout << "Введите метод вычисления:" << std::endl;
	std::cout << "1. Дискриминант" << std::endl;
	std::cout << "2. Теорема Виета" << std::endl;

	std::cout << std::endl;
	std::cout << "Ваш ответ: ";
	std::cin >> varSwitch;
	switch (varSwitch) {
	case 1: {
		std::cout << std::endl;
		std::cout << "Дискриминант - a*x^2 + b*x + c = 0" << std::endl;
		const long double varDNT = pow(varB1, 2) - (4 * varA1 * varC1);

		if (varDNT > 0) {
			std::cout << std::endl;
			std::cout << "Ответ: два корня" << std::endl;
			const long double varX1 = (-varB1 + sqrt(varDNT)) / (2 * varA1);
			const  double varX2 = (-varB1 - sqrt(varDNT)) / (2 * varA1);
			std::cout << "Первый корень = " << varX1 << std::endl;
			std::cout << "Второй корень = " << varX1 << std::endl;
			std::cout << "Завершение работы..." << std::endl;
		}
		else if (varDNT == 0) {
			std::cout << std::endl;
			std::cout << "Ответ: один корень" << std::endl;
			const long double varX1 = -(varB1 / (2 * varA1));
			std::cout << "Корень = " << varX1 << std::endl;
			std::cout << "Завершение работы..." << std::endl;
		}
		else if (varDNT < 0) {
			std::cout << std::endl;
			std::cout << "Ответ: действительных корней нет!" << std::endl;
		}
		else {
			std::cout << std::endl;
			std::cout << "Ошибка! Попробуйте еще раз!" << std::endl;
		}
	}
		break;
		
	case 2: {
		std::cout << std::endl;
		std::cout << "Теорема Виета - a*x^2 + b*x + c = 0" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Ответ: два корня" << std::endl;
		const long double varX1 = -(varB1 / varA1);
		const long double varX2 = varC1 / varA1;
		std::cout << "Первый корень = " << varX1 << std::endl;
		std::cout << "Второй корень = " << varX1 << std::endl;
		std::cout << "Завершение работы..." << std::endl;
	}
		break;

	default: {
		std::cout << std::endl;
		std::cout << "Ошибка! Попробуйте еще раз!" << std::endl;
	}
		break;
	}
}