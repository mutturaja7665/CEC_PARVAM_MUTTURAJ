#include <iostream>
using namespace std;

class car {
    public:
    string brand;
    void start() {
        cout << brand << "car started!" << endl;
    }
};

int main() {
    car c1;     //object creation
    c1.brand = "Toyota"; //According data member
    c1.start();     //calling member function
    return 0;
}