#include<iostream>
using namespace std;

int getlength(string name){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}

int main() {
    string s;
    cout<<"Enter your name dear: ";
    cin >> s;
    cout<<"Your name is "<<s<<endl;
    cout<<"Length of your name is "<<getlength(s)<<endl;
    return 0;
}