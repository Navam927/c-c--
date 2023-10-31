#include<iostream>
using namespace std;

int getLength(char s[]){
    int count = 0;
    for(int i = 0; i < '\0';i++){
        count++;
    }
    return count;
}
void reverse(char s[], int length){
    int st = 0;
    int e = length-1;
    while(st<e){
        swap(s[st++],s[e--]);
    }
}



int main() {
    char s[20];
    char before[20];
    cout<<"Enter a string ";
    cin>>s;
    cout<<"You entered "<<s;
    int len = getLength(s);
    reverse(s,len);
    
}