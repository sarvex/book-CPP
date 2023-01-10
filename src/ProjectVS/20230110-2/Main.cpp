/*
* Требования к программному коду:
* 1. Мольганов Андрей Александрович
* 2. IC DOSTI, ЦАТЭК П3Э
* 3. Версия языка C++ - 20
* 4. Версия языка C - 18
*
*/

#include <iostream>
#include <thread>
#include <string>

void thread_func()
{
	std::cout << std::this_thread::get_id() << std::endl;
}

int main(int argc, char* argv[])
{
	std::thread th(thread_func);
	std::thread::id th_id = th.get_id();
	th.join();
	std::cout << th_id << std::endl;
	return 0;
}