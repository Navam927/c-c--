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
    displayArray(v);
    return 0;

}