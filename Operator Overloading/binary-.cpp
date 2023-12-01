#include<iostream>
using namespace std;

class Complex
{
    private: 
        int real, imag;
    public:
        void accept()
        {
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imag part: ";
            cin >> imag;
        }

        Complex operator-(Complex obj)
        {
            Complex c;
            c.real = real - obj.real;
            c.imag = imag - obj.imag;
            return c;
        }

        void display()
        {
            if(imag <0)
            {
                imag = -(imag);
                cout << real<<"-"<<imag<<"i"<<endl;
            }
            else
            {
                cout << real <<" + "<<imag<<"i"<<endl;
            }
        }

};

int main()
{   
    Complex c1,c2,diff;
    c1.accept();
    c2.accept();
    diff = c1-c2;
    cout << "1st complex number: ";
    c1.display();
    cout << "2nd complex number: ";
    c2.display();
    cout<<"Difference of numbers: ";
    diff.display();
    return 0;
}