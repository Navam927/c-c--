#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZero(vector<int> v)
{
    vector<int> v2;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i]!=0)
        {
            v2.push_back(v[i]);
        }
    }
    for(int i = v2.size(); i < v.size(); i++)
    {
        v2.push_back(0);
    }
    return v2;
}

void displayArray(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    vector<int> v1 = {2,1,0,0,3,1,9};
    vector<int> ans = moveZero(v1);
    displayArray(ans);
    return 0;

}