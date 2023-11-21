#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,1,2};
    vector<int> k;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i]!=v[i+1])
        {
            k.push_back(v[i]);
        }
    }
    int size = k.size();
    for(int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }
    cout << endl;
    cout << size << endl;
    return 0;
}