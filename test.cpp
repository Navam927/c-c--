#include<iostream>
<<<<<<< HEAD
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