#include <iostream>
using namespace std;

class Calculator{
    public:
    int add(int a,int b);
    int substract(int a,int b);
};

int Calculator::add(int a,int b) {
    return a+b;
}

int Calculator::substract(int a,int b) {
    return a-b;
}

int main(){
    Calculator calc;
    cout << "Add:"<< calc.add(10,5) << endl;
    cout << "substract:" << calc.substract(10,5) << endl;
    return 0;
}