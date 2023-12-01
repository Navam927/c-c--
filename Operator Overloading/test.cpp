#include<iostream>
using namespace std;

class CLASS
{
    private:
        int num;
    public:

        void accept()
        {
            cout << "Enter num ";
            cin >> num;
        }
        void display()
        {
            cout << num <<endl;
        }
};

int main()
{   
    CLASS c1,c2;
    c1.accept();
    c2 = c1;
    cout << "c2 is ";
    c2.display();
    cout <<endl;
    return 0;
}