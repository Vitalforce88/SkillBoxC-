
//1.В главном исполняемом файле(файл, в котором находится функция main),
//  используя цикл и условия, выведите в консоль все чётные числа от 0 до N(N задайте константой в начале программы).
// 
//2.Напишите функцию, которая в зависимости от своих параметров печатает в консоль или чётные,
//  или нечётные числа от 0 до N(N тоже сделайте параметром функции).
//  
//3.Минимизируйте количество циклов и условий.
#include <iostream>

void EvenOddPrint(int Limit, bool IsOdd) {
    if (IsOdd) {
        for (int i = 0; i <= Limit; i +=2) {
            //if (i % 2 == 0) std::cout << i << std::endl; 
            std::cout << i << std::endl;
        }
    }
    else if (!IsOdd) {
        for (int i = 1; i <= Limit; i+=2) {
            //if (i % 2 != 0) std::cout << i << std::endl;
            std::cout << i << std::endl;
        }
    }
}

int main()
{
    const int N = 10;
    EvenOddPrint(10, false);
    EvenOddPrint(25, true);
    for (int i = 0; i <= N; i += 2) {
        //if (i % 2 == 0) std::cout << i << std::endl;
        std::cout << i << std::endl;
    }
}


