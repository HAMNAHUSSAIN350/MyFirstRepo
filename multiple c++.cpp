#include<iostream>
using namespace std;
class Add
{
public:
int a,b;
void getdata()
{
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"Enter another number"<<endl;
cin>>b;
}};
class multiple:public Add{
public:
void multi()
{
cout<<a*b<<endl;
}
};
int main()
{
multiple a;
a.getdata();
a.multi();
} 
