#include <iostream>
using namespace std;
class space 
{
    int x;
    int y;
    int z;
public:
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display() 
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
    space operator-() 
    {
        space ;
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
 {
    space S;
    S.getdata(10, -20, 30);
    cout << "S" << endl;
    S.display();
    -S;
    cout << "-S" << endl;
    S.display();
    return 0;
}
