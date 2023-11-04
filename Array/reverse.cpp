#include<iostream>
using namespace std;
#include<vector>


vector<int>  reverse(vector<int> v)
{   
    int start = 0;
    int end = v.size()-1;
    while(start<=end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

void displayAns(vector<int> a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v1 = {1,2,3,4,5};
    vector<int> ans = reverse(v1);
    displayAns(ans);
    return 0;
    
}