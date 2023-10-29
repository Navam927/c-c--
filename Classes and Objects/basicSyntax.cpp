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
};

int main()
{
    student s1;
    s1.firstName = "Navam";
    s1.id = 1961;
    s1.printdetails();
    return 0;
}