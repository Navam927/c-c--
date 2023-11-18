#include<iostream>
using namespace std;

class ABC{
    public:
        int *x; // Used * to allcate memory dynamically.
        ABC(int y = 0)
        {
            x = new  int(y);
        }
        void setx(int z)
        {
            *x = z;
        }
        void print()
        {
            cout << *x << endl;
        }
        ABC operator=(ABC temp)
        {
            *x = *temp.x;
            return *this;
        }
};


int main()
{
    ABC a1(2);
    ABC a2;
    a2 = a1;
    a1.setx(3);
    a2.print();
    return 0;
}