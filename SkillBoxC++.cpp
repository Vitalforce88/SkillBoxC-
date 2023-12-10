// SkillBoxC++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
int main()
{	//1

	const int N = 5;

	int arr[N][N];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = i + j;
		}
	}
	//2

	for (int i = 0; i < N; i++) {
		std::cout << std::endl;
			for (int j = 0; j < N; j++) {
				std::cout << arr[i][j];
			}
	}
	//3

	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	auto this_day = buf.tm_mday;
	int sum = 0;
	std::cout << "Today is " << this_day << std::endl;
	int index = this_day % N;

	if (index < N) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == index) sum += arr[i][j];
			}
		}
		std::cout << "\nSum of elements on index " << index << " is: " << sum << std::endl;

	}
	else std::cout << "index outside the array\n";
}


