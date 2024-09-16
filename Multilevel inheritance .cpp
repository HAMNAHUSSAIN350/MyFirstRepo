#include<iostream>
using namespace std;
class A
{
      private:
      int a;
      public:
      void setdata()
      {
      cout<<"Enter a"<<endl;
      cin>>a;
      }
      void getdata()
      {
      cout<<"value of a is="<<a<<endl;
      }
      };
      class B:public A
      {
      private:
      int b;
      public:
      void setdata()
      {
         A::setdata();
      cout<<"Enter b"<<endl;
      cin>>b;
      }
      void getdata()
      { 
         A::getdata();
      cout<<"value of b is="<<b<<endl;
      }
      };
      class C:public B
      {
         private:
         int c;
         public:
       void setdata()
      {
        B::setdata();
      cout<<"Enter c"<<endl;
      cin>>c;
      }
      void getdata()
      {
         B::getdata();
      cout<<"value of C is="<<c <<endl;
      }
      };
    int main()
    {
    C c;
    c.setdata();
    c.getdata();
    return 0;
}
