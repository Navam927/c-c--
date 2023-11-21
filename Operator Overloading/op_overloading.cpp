#include<iostream>
using namespace std;

class Complex{
    private:
            int real,imag;
    public:
            Complex(int r = 0, int i = 0)
            {
                real = r;
                imag = i;
            }
            Complex operator+(Complex const& obj)
            {
                Complex res;
                res.real = real + obj.real;
                res.imag = imag + obj.imag;
                return res;
            }
            void Sumprint() 
            {
                if(imag < 0)
                {
                    imag = -(imag);
                    cout << real <<" -i"<<imag<<endl;
                }
                else
                {
                    cout << real << " +i"<<imag<<endl;
                }
            }
            Complex operator-(Complex const& obj)
            {
                Complex res;
                res.real = real - obj.real;
                res.imag = imag - obj.imag;
                return res;
            }
            void Difprint()
            {
                if(imag < 0)
                {
                    imag = -(imag);
                    cout << real <<" -i"<<imag<<endl;
                }
                else
                {
                    cout << real << " +i"<<imag<<endl;
                }
            }
            Complex operator*(Complex& obj)
            {
                Complex res; // a,c -> real || b,d -->imag
                res.real = (real * obj.real) - (imag * obj.imag);
                res.imag = (real * obj.imag )+ (imag * obj.real);
                return res;
            }
            void Mulprint()
            {
                if(imag < 0)
                {
                    imag = -(imag);
                    cout << real <<" -i"<<imag<<endl;
                }
                else
                {
                    cout << real << " +i"<<imag<<endl;
                }
            }


};


int main()
{
    Complex c1(10,-9),c2(3,4);
    cout << "Sum is ";
    Complex c3 = c1+c2;
    c3.Sumprint();
    cout << endl;

    cout << "Difference is ";
    Complex c4 = c1-c2; 
    cout << endl;
    c4.Difprint();
    cout << endl;

    cout << "Multiplication is ";
    Complex c5 = c1*c2;
    c5.Mulprint();
    cout << endl;
    return 0;
}