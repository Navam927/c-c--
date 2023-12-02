#include<iostream>
#include<vector>
using namespace std;
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
    vector<int> nums = {1,1,2,2,3,3,3,4};
    int index = 1;
       vector<int> v1;
       if(nums.size()<=1)
       {
           return 1;
       }
    //    v1.push_back(nums[0]);
       for(int i = 1; i < nums.size(); ++i)
       {
           if(nums[i] != nums[i+1])
           {
               v1.push_back(nums[i]);
           }
       }
       nums.clear();
       nums = v1;
       displayArray(nums);
       cout << nums.size();
    return 0;
}