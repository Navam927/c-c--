#include<iostream>
#include<vector>
using namespace std;


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
    cout << "You entered "<< endl;
    for(auto &str:stringArray)
    {
        cout << str<< " ";
    }

    return 0;
}