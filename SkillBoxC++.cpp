//***************************************
//1. Создайте класс вектора.
//2. Его переменные должны быть в приватной области видимости.
//3. Показывать значения этих переменных нужно через публичный метод.
//4. Дополните класс Vector public методом, который будет возвращать длину(модуль) вектора.
//5. Протестируйте проект.

#include <iostream>
#include <cmath>

class Vector {
private:
	double x;
	double y;
	double z;
public:
	Vector() :x(0), y(0), z(0) {};
	Vector(double xCoord, double yCoord, double zCoord) {
		x = xCoord;
		y = yCoord;
		z = zCoord;
	}
	void Show() {
		std::cout << "Vector" << "{ " << x << ", " << y << ", " << z << " }" << std::endl;
	}
	double Modulus() {
		return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	}
};

int main()
{
	Vector myVec(2, 2, 5);
	myVec.Show();
	std::cout << myVec.Modulus() << std::endl;
}


