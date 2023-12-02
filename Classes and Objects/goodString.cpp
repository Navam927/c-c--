#include<iostream>
using namespace std;
#include<string>
#include<cmath>

int main()
{
    int n;
    cin >> n;
    string s;
    getchar();
    getline(cin,s);
    int len = s.length();
    for(int i = 0; i < min(n,len); i++)
    {
        cout << s[i];
    }
    cout << endl;
}