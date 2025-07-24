#include <iostream>

int main()
{
    int a = 5, b = 10;
    
    /*
    Объявляем функции до их запуска
    */
    int sum(int a, int b);
    int diff(int a, int b);
    int multiplication(int a, int b);
    double division(int a, int b);

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;

    return 0;
}

/*-- Сами функции --*/

int sum(int a, int b){
    return a + b;
}

int diff(int a, int b){
    return a - b;
}

int multiplication(int a, int b){
    return a * b;
}

double division(int a, int b){
    double a2 = static_cast<double>(a);
    double b2 = static_cast<double>(b);
    return a2 / b2;
}