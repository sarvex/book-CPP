/*
* Требования к программному коду:
* 1. Мольганов Андрей Александрович
* 2. IC DOSTI, ЦАТЭК П3Э
* 3. Версия языка C++ - 20
* 4. Версия языка C - 18
*
* Задание 1: Хранить данные в калькуляторе с помощью multiset/set
* Задание 2: Добавить генерацию данных случайным образом с помощью srand или random generator number
*/

#include <iostream>
#include <ctime>
#include <set>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	multiset <int> mst;
	
	cout << "Объявление случайных значений: " << endl;
	
	for (int i = 0; i < 10; i++) {
		int random = rand() % 10 + 1;
		mst.insert(random);
		cout << i + 1 << ") " << random << endl;
	}
	
	multiset <int> ::iterator it = mst.begin();
	cout << "Отсортированный вариант: " << endl;
	
	for (int i = 1; it != mst.end(); i++, it++) {
		cout << *it << " ";
	}
	
	system("pause");
	return 0;
}