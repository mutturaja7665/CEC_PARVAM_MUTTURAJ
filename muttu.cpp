#include<iostream>
using namespace std;

class book{
    public:
    string tittle;
    string author;
    void display(){
        cout<< "Title:" << tittle << "Author: " <<author << endl;
    }        
};

int main(){
    book b1;
    b1.author ="allice";
    b1.tittle ="c++";
    b1.display();// output:alice-20
}