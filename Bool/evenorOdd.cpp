#include<iostream>
using namespace std;

bool evenChecker(int n);

int main() {
    int a;
    cout<<"Enter a number: ";
    cin >> a;
    int result = evenChecker(a);
    cout<<result;
    cout<<endl;
    return 0;
}

bool evenChecker(int n){
    if(n%2==0){
        return true;
    }
    return false;
}