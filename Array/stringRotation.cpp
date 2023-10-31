#include<iostream>
using namespace std;


int getlen(char s[]){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }
    return count;
}

void rotater(char s[],int len){
    int st = 0;
    
    int e = len-1;
    swap(s[st],s[e]);
    while(st<e){
        swap(s[++st],s[--e]);
    }
}

int main() {
    char s[20];
    cout<<"Enter a string: ";
    cin >> s;
    int len = getlen(s);
    cout<<"Length of your string is "<<len<<endl;
    rotater(s,len);
    cout<<"Rotated string is "<<s<<endl;
    return 0;

}