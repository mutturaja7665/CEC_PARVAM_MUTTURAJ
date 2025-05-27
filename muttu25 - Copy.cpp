#include <iostream>
using  namespace std;

class Animal

{
    public:
    virtual void sound() = 0;
    virtual ~Animal() {}
};
class Elephant : public Animal
{
    public:
    void sound() override
    {
        cout << "Elephant says: Woof!" << endl;
    }
};

class Camel : public Animal
{
    public:
    void sound() override
    {
        cout << "Camel says: Meow!" << endl;
    }
};
 int main()
 {
    Animal *a1 = new Elephant();
    Animal *a2 = new Camel();
    a1->sound();
    a2->sound();
    delete a1;
    delete a2;
    return 0;

 }