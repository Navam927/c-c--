#include<iostream>
using namespace std;
#include<vector>


vector<int> arrayMerger(vector<int> v1, vector<int> v2)
{
    vector<int> v3;
    for(int i = 0; i < v1.size(); i++)
    {
        v3.push_back(v1[i]);
    }
    for(int i = 0; i < v2.size(); i++)
    {
        v3.push_back(v2[i]);
    }
    return v3;
    
}

void displayArray(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> arraySorter(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i+1; j < v.size(); j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
    }
    return v;
}

int main()
{
    vector<int> v1 = {1,3,5,7};
    vector<int> v2 = {2,4,6,8};
    vector<int> v3 = arrayMerger(v1,v2);
    cout<<"Merged array is "<<endl;
    displayArray(v3);
    cout<<"Sorted array is "<<endl;
    v3 = arraySorter(v3);
    displayArray(v3);
    
    return 0;

}