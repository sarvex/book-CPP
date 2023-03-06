/*
* ���������� � ������������ ����:
* 1. ��������� ������ �������������
* 2. IC DOSTI, ����� �2�
* 3. ������ ����� C++ - 20
* 4. ������ ����� C - 18
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
