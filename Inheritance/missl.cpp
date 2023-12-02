#include<iostream>
using namespace std;

class ABC
{
    public:
        void  print()
        {
            cout << "Base class" << endl;
        }
};

int main()
{
    ABC *p;
    ABC f;
    p = &f;
    p->print();
    return 0;
}