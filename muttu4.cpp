#include <iostream>
using namespace std;

class bike {
    public:
    string brand;
    void start() {
        cout << brand << "bike started!" << endl;
    }
};



int main() {
    bike b1;        //object creation
    b1.brand = "Ninja";  //according data member
    b1.start();     //calling member function
    return 0;
}