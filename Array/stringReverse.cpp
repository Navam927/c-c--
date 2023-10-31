#include<iostream>
using namespace std;


void reverseString(char name[],int n){
    int s = 0; 
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}

int main() {
    char s[20];
    cout<<"Enter your name dear: ";
    cin >> s;
    cout<<"Your name is "<<s<<endl;
    int len = getlength(s);
    cout<<"Length of your name is "<<len<<endl;
    cout<<"Your name in reverse is ";
    reverseString(s,len);
    cout<<s<<endl;
    return 0;
}