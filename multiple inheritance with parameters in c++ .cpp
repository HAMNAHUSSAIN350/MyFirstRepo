#include<iostream>
using namespace std;
class A
{
private:
int a;
public:
void set(int x)
{a=x;
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
void set(int m,int n)
{
A::set(m);
b=n;
}
void out()
{
A::out();
cout<<"the value of b"<<b<<endl;
}
};
class C:public B
{
private:
int c;
public:
void set(int g,int h,int k)
{
B::set(g,h);
c=k;
}
void out()
{
B::out();
cout<<"the value of c"<<c<<endl;
}
};
int main()
{
C obj;
obj.set(1,2,3);
obj.out();
}
