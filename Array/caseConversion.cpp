#include<iostream>
using namespace std;


void convert(string &s, int len)
{
    for(int i = 0; i < len; i++)
    {
       
        if(s[i]>=65&&s[i]<=90){
            
            s[i]+=32;
        }
        else 
        {
            s[i]-=32;
        }

    }
    
}

int getLength(string s)
{
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main() 
{
    string str;
    cout<<"Enter a string ";
    cin>>str;
    int len = getLength(str);
    cout<<"Length of string is "<<len<<endl;
    convert(str,len);
    cout<<"Case converted string is "<<str<<endl;
    return 0;

}