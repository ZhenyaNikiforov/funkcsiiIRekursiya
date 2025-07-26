#include <iostream>
using namespace std;

void multiple(int value, int power);

int main(){

    int value = 5;
    int power = 2;
    
    multiple(value, power);
    
    value = 3;
    power = 3;
    
    multiple(value, power);
    
    value = 4;
    power = 4;
    
    multiple(value, power);
    
    return 0;
}

void multiple(int value, int power){
    
    int result = 1;
    
    for(int i = 0; i < power; i++){
      result = result * value;
    }
    
    cout<<value<<" в степени "<<power<<" = "<<result<<endl;
    
    return;
}