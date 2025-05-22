#include <iostream>
using namespace std;

class account{
    private:
    int balance;
    public:
    void setbalance(int b) {
        balance = b;
    }
int getbalance() {
    return balance;
}
};

int main(){
    account acc;
    acc.setbalance(1000);
    cout << "Balance:" << acc.getbalance() << endl;//output:balance:1000
    return 0;
}