#include<iostream>
using namespace std;

class A
{
    public:
        virtual void print()
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
   
    D d;
    d.print();
    
    return 0;
}