#include<iostream>
using namespace std;


int sumUpton(int n)
{
    if(n<=1){
        return 1;
    }
    int sum = 0;
    return n+sumUpton(n-1);
}

int main() 
{
    cout<<"Enter number ";
    int n;
    cin >> n;
    int result = sumUpton(n);
    cout<<"Sum upto n is "<<result<<endl;
    return 0;
}