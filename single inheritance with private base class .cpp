#include <iostream>
using namespace std;
class B 
{
     private:
    int age;
     public:
    int roll_no;
    void getdata() 
    {
        cout<<"Enter age";
        cin>>age;
        cout<<"Enter roll_no";
        cin>>roll_no;
    }
    void Name() 
    {
        cout<<"Name"<<endl;
    }
    void Age() 
    {
        cout<<"Age"<<endl;
    }
    void RollNo() 
    {
         cout<<"RollNo"<<endl;
    }
};
class D : private B 
{
     private:
    string colour;
      public:
    void getdata()
     {
        B::getdata(); 
        cout<<"Enter colour";
        cin>>colour;
    }
    void Taste() 
    {
        cout<<"Taste"<<endl;
    }
    void Name()
    {
        B::Name();
    }
    void Age()
    {
       B::Age();
       }
       void RollNo()
       {
       B::RollNo();
       }
};
int main()
 {
    D d1, d2;
    d1.getdata();
    d1.Taste();
    d1.Name();
    d2.getdata();
    d2.Name();
    d2.Age();
    d2.RollNo();
    return 0;
}
