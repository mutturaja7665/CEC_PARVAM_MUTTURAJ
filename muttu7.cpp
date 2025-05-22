+292
Lines changed: 292 additions & 0 deletions
Original file line number	Diff line number	Diff line change
@@ -0,0 +1,292 @@
1. Class: Bus
Real-life Scenario: Each bus has details like number, route, and capacity.
#include<iostream>
using namespace std;
class Bus {
public:
    string busNumber;
    string route;
    int capacity;
    void display() {
        cout << "Bus Number: " << busNumber << endl;
        cout << "Route: " << route << endl;
        cout << "Capacity: " << capacity << " passengers" << endl;
    }
};
int main() {
    Bus b1;
    b1.busNumber = "KA05 1234";
    b1.route = "City Center to Airport";
    b1.capacity = 40;
    b1.display();
    return 0;
}