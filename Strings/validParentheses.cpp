#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string a;
    stack<char> bar;
    cin >> a;
    for(int i = 0; i != '\0'; i++)
    {
        if( (a[i]=='(') || (a[i]=='{') || (a[i]=='[') )
        {
            bar.push(a[i]);
        }
        
        if( (a[i]==')') || (a[i]=='}') || (a[i]==']') )
        {
            if(bar.top() == a[i])
            {
                bar.pop();
            }
            else 
            {
                cout << "No";
            }
        }
        
        
    }
    return 0;
}