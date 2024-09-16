#include<iostream>
using namespace std;
class A{
private:
int a;
public:
void in()
{
cout<<"enter a";
cin>>a;
}
void out()
{
cout<<"the value of a"<<a<<endl;
}
};
class B:public A
{
private:
int b;
public:
void in()
{
A::in();
cout<<"enter b";
cin>>b;
}
void out()
{
A::out();
cout<<"the value of b is"<<b<<endl;
}
};
class C:public B
{
private:
int c;
public:
void in()
{
B::in();
cout <<"enter c";
cin>>c;
}
void out()
{
B::out();
cout << "value of c is"<<c<<endl;
}
};
int main()
{
C obj;
obj.in();
obj.out();
}

