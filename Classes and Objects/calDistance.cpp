#include<iostream>
using namespace std;

class Distance
{
    private:
        double feet,inches;
    public:
        void readDistance()
        {
            cout << "Enter feet ";
            cin >> feet;
            cout <<endl;
            cout << "Enter inches ";
            cin >> inches;
        }

        Distance operator+(Distance& d1)
        {
            Distance temp;
            if(inches+d1.inches>=12)
            {
                temp.inches = inches - d1.inches;
                temp.feet = feet + d1.feet;
            }
            else 
            {
                temp.feet = feet + d1.feet;
                temp.inches = inches + d1.inches;
            }
            return temp;
        }

        Distance operator-(Distance& d1)
        {
            Distance temp;
            if(inches<d1.inches)
            {
                temp.feet = feet - d1.feet;
                temp.inches = inches - d1.inches + 12;

            }
            else
            {
                temp.feet = feet - d1.feet;
                temp.inches = inches - d1.inches;
            }
            return temp;
        }
        void display()
        {
            if(inches < 0)
            {
                inches = -(inches);
                
            }
            cout << "'" <<feet <<"'" << " + " << '"' <<inches << '"';
            cout << "   "<< endl;
        }

};

int main()
{
    Distance a,b,s,d;
    a.readDistance();
    b.readDistance();
    cout << "You entered ";
    a.display();
    cout <<endl;
    b.display();
    s = a+b;
    d = a-b;
    cout << "Sum is ";
    s.display();
    cout << endl;
    cout << "Difference is ";
    d.display();
    return 0;
}