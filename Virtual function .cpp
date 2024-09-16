#include <iostream>
using namespace std;
class Base 
{
public:
    void display() 
    {
        cout << "Base" << endl;
    }
    virtual void show() {
        cout << "Base" << endl;
    }
};

class Derived: public Base {
public:
    void display() {
        cout << "Derived" << endl;
    }
    virtual void show() {
        cout << "Derived" << endl;
    }
};

int main() {
    Base b;
    Derived D;
    Base *bptr;
    cout << "*bptr" << endl;
    bptr = &b;
    bptr->display();
    bptr->show();
    b.display();
    cout << "*bptr" << endl;
    bptr = &D;
    bptr->display();
    bptr->show();
    return 0;
}
