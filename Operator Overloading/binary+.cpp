#include<iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:
        void accept()
        {
            cout << "Enter real part: ";
            cin >> real;
            cout <<endl<<"Enter imag part: ";
            cin >> imag;
        }

        Complex() 
        {
            real = 0;
            imag = 0;
        }
        Complex(int r , int i  )
        {
            real = r;
            imag = i;
        }
        Complex operator+(Complex obj)
        {
            Complex c;
            c.real = real + obj.real;
            c.imag = imag + obj.imag;
            return c;
        }

        void display()
        {
            cout << real <<" + "<<imag<<"i"<<endl;
        }
        
};

int main()
{   
    Complex c1,c2,sum;
    c1.accept();
    c2.accept();

    cout << "Entered values: ";
    c1.display();
    cout << endl;
    c2.display();

    sum = c1+c2;

    cout << "complex number is ";
    sum.display();

    return 0;
}