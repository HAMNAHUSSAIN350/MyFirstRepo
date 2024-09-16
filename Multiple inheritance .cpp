#include <iostream>
using namespace std;
class M
{
     protected:
    int m;
     public:
    void set_m() 
    {
        cout<<"Enter value of m";
        cin>>m;
    }
     void get_m()
     {
     cout<<"value of m is ="<<m<<endl;
     }
     };
class N
{
     protected:
     int n;
    public:
    void set_n()
     {
        cout<<"Enter value of n";
        cin>>n;
    }
    void get_n()
    {
    cout<<"value of n is ="<<n<<endl;
    }
    };
 class P:public M,public N
 {
         public:
         void display()
           {
           cout<<"m="<<m<<endl;
           cout<<"n="<<n<<endl;
           cout<<"m*n="<<m*n<<endl;
           }
           };
int main()
 {
    P p;
    p.set_m();
    p.set_n();
    p.display();
    return 0;
}
