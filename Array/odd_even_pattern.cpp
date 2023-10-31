#include<iostream>
using namespace std;

int main() {
    int n; 
    cin >>n;
    for(int odd = 1, even = 2; even < n, odd<n; even=even+2,odd=odd+2){
        cout<<even<<" "<<odd<<" ";
    }
}