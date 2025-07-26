#include <iostream>
using namespace std;

void fib(int index);

int main(){
    
    int number = 0;
    
    cout<<"Введите число: ";
    cin>>number;
    
    fib(number);

    return 0;
}

void fib(int index){
    
    if(index < 1){
        cout<<"Ошибка! Ряд Фибоначчи начинается с 1!"<<endl;
        return;
    }
    
    if(index == 1){
        cout<<"Числа Фибоначчи: 0"<<endl;
        return;
    }
    
    if(index == 2){
        cout<<"Числа Фибоначчи: 0 1"<<endl;
        return;
    }
    
    cout<<"Числа Фибоначчи: 0 1";
    int number1 = 0;
    int number2 = 1;
    int storage = 0;
    
    for(int i = 2; i < index; i++){
        storage = number1 + number2;
        cout<<" "<<storage;
        number1 = number2;
        number2 = storage;
    }
    
    return;
}