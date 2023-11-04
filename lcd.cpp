#include<iostream>
using namespace std;

int main() 
{
    int a,b;
    cout<<"Enter two numbers ";
    cin >> a>>b;
    
    int lcm = (a>b) ? b:a;
    int g;
    while(true)
    {
        if(lcm%a==0&& lcm%b==0)
        {
            g = lcm;
            break;
        }
        lcm++;
    }
    cout<<g<<endl;
}