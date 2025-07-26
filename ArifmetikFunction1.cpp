#include <iostream>
using namespace std;

/*-- Объявляем функции до их запуска --*/

int sum(int firstNumber, int secondNumber);
int diff(int firstNumber, int secondNumber);
int multiplication(int firstNumber, int secondNumber);
double division(int firstNumber, int secondNumber);

int main(){
    
    int a = 5, b = 10;
    
	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	cout << a << " + " << b << " = " << s << endl;
	cout << a << " - " << b << " = " << dif << endl;
	cout << a << " * " << b << " = " << mult << endl;
	cout << a << " / " << b << " = " << div << endl;

    return 0;
}

/*-- Сами функции --*/

int sum(int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
}

int diff(int firstNumber, int secondNumber){
    return firstNumber - secondNumber;
}

int multiplication(int firstNumber, int secondNumber){
    return firstNumber * secondNumber;
}

double division(int firstNumber, int secondNumber){
    double doubleFirstNumber = static_cast<double>(firstNumber);
    double doubleSecondNumber = static_cast<double>(secondNumber);
    return doubleFirstNumber / doubleSecondNumber;
}