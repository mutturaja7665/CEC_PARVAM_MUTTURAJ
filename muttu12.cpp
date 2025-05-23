#include <iostream>
using namespace std;

class car {
    string model;
    int year;

    public:
    car() {
        model ="unknown";
        year = 0;
    }
    car(string m) {
        model = b;
        year = 0;
    }

    car(string m, int y) {
        model = m;
        year = y;
    }
    void display() {
        cout << "Model:" << model << "Year:" << year << endl;
    };
    
