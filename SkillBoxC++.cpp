//Создайте C++ - проект в Visual Studio(консольное приложение) :
//
//    1.В главном исполняемом файле(файл, в котором находится функция main) создайте и инициализируйте 
//      переменную типа std::string любым значением.
//    2.Выведите саму строковую переменную, длину строки, первый и последний символы этой строки.
//      Для вывода используйте std::cout << .


#include <iostream>
#include <string>
int main()
{
    std::string myString = "???";

    std::cout << "Enter word or text: ";
    std::getline(std::cin, myString);

    std::cout << "You have entered:\n" << myString << "\nLength of text: " << myString.length()
                << "\nFirst character is: " << myString.front()
                    << "\nLast character is: " << myString.back() << std::endl;
}


