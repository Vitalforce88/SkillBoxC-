/*1.Создайте класс Animal с публичным методом Voice(), который выводит в консоль строку с текстом.
* 
  2.Наследуйте от Animal минимум три класса (к примеру Dog, Cat и т. д.) и в них перегрузите метод Voice() таким образом,
    чтобы для примера в классе Dog метод Voice() выводилось Woof! в консоль.

  3.В функции main создайте массив указателей типа Animal и заполните этот массив объектами созданных классов.

  4.Затем пройдитесь циклом по массиву, вызывая на каждом элементе массива метод Voice().

  5.Протестируйте его работу. Должны выводиться сообщения из ваших классов-наследников Animal.*/

#include <iostream>
// 1
class Animal {
public:
    virtual void Voice() {
        std::cout << "I am animal\n";
    }
};
// 2
class Dog : public Animal {
    void Voice()override {
        std::cout << "Woof woof!\n";
    }
};

class Cat : public Animal {
    void Voice()override {
        std::cout << "Meow meow meow!\n";
    }
};

class Bird : public Animal {
    void Voice()override {
        std::cout << "Chirp chirp chirp!\n";
    }
};

int main()
{
    //3
    Animal *pD = new Dog;
    Animal *pB = new Bird;
    Animal *pC = new Cat;
    Animal *arr[3] = {pD,pB,pC};

    //4-5
    for (int i = 0; i != 3; ++i) {
        arr[i]->Voice();
    }

    //https://habr.com/ru/companies/aligntechnology/articles/283352/ (для себя - "без new и delete/delete[]")
    for (int d = 0; d != 3; ++d) {
        delete arr[d]; // Удаляем то на что указываем - т.к. это динамический объект
        arr[d] = nullptr;
        std::cout << "...memory release is complete\n";
    }

}


