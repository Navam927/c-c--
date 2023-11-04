#include<iostream>
using namespace std;
#include<vector>

vector<int> reverse(vector<int> v,int start, int end)
{
    
    while(start<=end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

void displayVector(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> v1 = {1,2,3,4,5};
    // int n;
    // cout<<"Enter size ";
    // cin >> n;
    // cout<<endl;
    // for(int i = 0; i < n; i++)
    // {
    //     v1.push_back(i);
    // }
    cout<<"Enter index ";
    int index;
    cin >> index;
    //Reverse the whole array then around the index
    vector<int> ans = reverse(v1,index,v1.size()-1);
    // vector<int> finalAns = reverse(ans,index,index-1);
    displayVector(ans);
    return 0;
}

