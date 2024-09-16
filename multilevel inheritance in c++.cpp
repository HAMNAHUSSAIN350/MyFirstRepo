#include<iostream>
using namespace std;
class person
{
protected:
int id;
char name[50],addresses[100];
public:
person(){
id=0;
name[0]='0';
address[0]='0';
void input()
{
cout<<"enter your id";
cin>>id;
cout<<"enter your name";
cin>>name;
cout<<"enter your address";
cin>>addresses;
}
void output()
{
cout<<personal information;
cout<<id<<endl;
cout<<name<<endl;
cout<<addresses<<endl;
}};
class student:public person 
{private:
int roll number,marks;
public:
student()
{
person::person();
roll number =marks=0;
}
void input()
{
person::input()
cout<<"enter your roll number";
cin>>roll number;
cout<<"enter your marks";
cin>>marks;
}
void output()
{
person::output();
cout<<"educational information";
cout<<"roll number";
cout<<"marks";
}};
class scholarship:public student 
{private:
char sname[50]; 
long amount;
public:
void input()
{
student::input();
cout<<"enter scholarship name";
cin>>sname;
cout<<"enter scholarship amount";
cin>>amount;
}
void output()
{
student::output();
{
student::output();
cout<<"scholarship information";
cout<<"scholarship name<<sname";
cout<<scholarship amount<<amount;
}
};
int main()  
{
scholarship obj;
obj.input();
obj.output();
return 0;
}
