#include<iostream>
using namespace std;

class A
{
    public:
        void print()
        {
            cout << "Base class" << endl;
        }
};

class B: virtual public A
{

};

class C: virtual public A
{

};

class D: public B,public C 
{

};

int main()
{
    D *ptr;
    D d;
    ptr = &d;
    ptr->print();
    return 0;
}