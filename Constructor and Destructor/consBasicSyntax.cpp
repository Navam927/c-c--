#include <iostream>
using namespace std;

class student
{
public:
    int id;
    string firstName;
    void printdetails()
    {
        cout << "Student name is " << firstName << endl
             << "Student id is " << id << endl;
    }
    //Default constructor
    student(){
        cout<<"Default constructor called"<<endl;
        id = -1;
    }
    student(int x){
        x = id;
        cout<<"Parameterized constructor called"<<endl;
    }
};

int main()
{
    student s1,s2(27);
    s1.firstName = "Navam";
    s1.id = 1961;
    s1.printdetails();
    s2.firstName = "Dynamic Soul";
    s2.printdetails();
    return 0;
}