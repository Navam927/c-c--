#include<iostream>
using namespace std;

class Incre_Decre
{
    int a,b;
    public:
        void accept()
        {
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;

        }

        void operator--()
        {
            a--;
            b--;
        }
        
        void operator++()
        {
            a++;
            b++;
        }

        void display()
        {
            cout << "a "<< a <<endl<<"b "<<b<<endl;
        }
};

int main()
{
    Incre_Decre id;
    id.accept();
    --id;
    cout << "After decrementing "<<endl;
    id.display();
    ++id;
    ++id;
    cout << "After incrementing "<<endl;
    id.display();

    return 0;
}