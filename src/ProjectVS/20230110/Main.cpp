/*
* Требования к программному коду:
* 1. Мольганов Андрей Александрович
* 2. IC DOSTI, ЦАТЭК П2А
* 3. Версия языка C++ - 20
* 4. Версия языка C - 18
*
*/

#include <iostream>
#include <thread>
#include <string>

void say_hello(const std::string& name) {
	std::cout << "hello " << name << std::endl;
}

int main(int argc, char* argv[]) {
	std::thread th(say_hello, "world");
	th.join();
	return 0;
}
