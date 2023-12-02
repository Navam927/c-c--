/* Given a string. Find the number of alphabets that must be inserted to make it palindrome.
eg-: input ->'ab'  
output -> 1 (1 alphabet 'a' needs to be inserted to make it palindrome )
eg -: input -> 'aa'
output -> 0 ('aa' is already a palindrome) */

#include<iostream>
using namespace std;
#include<cstring>

bool checkPalindrome(string s)
{   
    string ogS = s;
    int start = 0, end = s.length()-1;
    while(start<=end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    if(ogS==s)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    int n = 1;
    while(n<=t)
    {
   string s;
   cin >> s;
   if(checkPalindrome(s) == true)
   {
    cout << 0;
   }
   else 
   {
    for(int i=0; i < s.length(); i++) {
        if(checkPalindrome(s.substr(i))) {
            cout << i << endl;
            break;
        }
    }
   }
    n+=1;
    }
    return 0;
}