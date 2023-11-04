#include<iostream>
using namespace std;
#include<vector>
#define s 40

void displayArray(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> isDuplicate(vector<int> v)
{
    vector<int> v2;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i]!=v[i+1])
        {
            v2.push_back(v[i]);
        }
    }
    return v2;
}

int main()
{
    int n;
    vector<int> v;
    int arr[s];
    cout<< "Enter size of array ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
    }
    cout<<"Your array is "<<endl;
    displayArray(v);
    vector<int> v2 = isDuplicate(v);
    cout<<"Array without duplicates is "<<endl;
    displayArray(v2);
    return 0;

}