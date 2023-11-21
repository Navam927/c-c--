#include<iostream>
#include<string>
using namespace std;

int main()
{
    string txt;
    cout << "Enter your full name ";
    getline(cin,txt);
    cout << "Hello "<<txt << endl;
    return 0;
}
