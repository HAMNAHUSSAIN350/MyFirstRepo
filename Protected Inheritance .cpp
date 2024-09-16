#include<iostream>
using namespace std;
class Parent 
{
      public:
      int a;
      protected:
      int b;
      private:
      int c;
      };
      class Child: protected Parent
      {
       public:
      void setdata()
      {
      cout<<"Enter a"<<endl;
      cin>>a;
      cout<<"Enter b"<<endl;
      cin>>b;
      }
      void getdata()
      {
      cout<<"value of a is="<<a<<endl;
      cout<<"value of b is="<<b<<endl;
      }
      };
    int main()
    {
    Child c;
    c.setdata();
    c.getdata();
    return 0;
}
