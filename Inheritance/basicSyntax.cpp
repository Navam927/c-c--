#include<iostream>
using namespace std;

class A
{
    public:
        int x = 2;
};
class B: public A
{

};
class C: public B
{

};

int main()
{
    A a;
    B b;
    C c;
    cout << b.x;
    cout << endl;
    cout << a.x << endl;
    cout << c.x << endl;
    return 0;
}