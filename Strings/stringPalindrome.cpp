#include<iostream>
#include<vector>
using namespace std;



void displayArray(vector<string> a,int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> stringArray(n);
    cout << "Enter string of size "<<n << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> stringArray[i];
    }
    displayArray(stringArray,n);
    
    return 0;
}