#include<iostream>
<<<<<<< HEAD
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
=======
#include <climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        
        int quotient = dividend/divisor;
        if(dividend <0 && divisor <0)
        {
            dividend = -(dividend);
            divisor = -(divisor);
            return quotient;
        }

        if(quotient > INT_MAX)
        {
            return INT_MAX;
        }
        if(quotient < INT_MIN)
        {
            return INT_MIN;
        }
    

        return quotient;
        

    }
};

int main()
{
        Solution s1;
        cout << s1.divide(2147483648,-1);
>>>>>>> 15fd4fe (added few codes)
}