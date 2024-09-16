#include <iostream>
using namespace std;
class Animal
{
public:
    string name;
protected:
    string food;
private:
    string taste;
    };
class Bird : public Animal
{
          public:
    void fly() 
    {
        cout<<"Flying"<<endl;
    }
    void eat() 
    {
        cout<<"Eating"<<endl;
    }
    void getdata() 
    {
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter food";
        cin>>food;
    }
};
int main() 
{
    Bird b;
    b.getdata();
    b.fly();
    b.eat();
    return 0;
}
