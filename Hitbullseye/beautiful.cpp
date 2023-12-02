// Fix the bug
// A string is beautiful if it has equal numer of a, b and c's in it.
#include<iostream>
using namespace std;
#include<string>

bool abcCounter(string s)
{
    int a_c = 0, b_c = 0, c_c = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]=='a')
        {
            a_c++;
        }
        else if(s[i] == 'b')
        {
            b_c ++;
        }
        else if(s[i]=='c')
        {
            c_c++;
        }
    }
    cout<<"a "<<a_c<<endl<<"b "<<b_c<<endl<<"c "<<c_c<<endl;
    if(a_c==b_c&& b_c == c_c)
    {
        return true;
    }
    
    return false;
}

int main()
{
    string s;
    cin >> s;
    if(abcCounter(s) == true)
    {
        cout << "beautiful";
    }
    else 
    {
        cout << "No";
    }

}