#include<iostream>
using namespace std;
#define size 3

int main()
{
    int arr[size][size];
    cout << "Enter elements to array: "<<endl;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin>>arr[i][j];
        }
    }
    cout<< "Array is "<<endl;
    for(int i = 0; i < size ; i++){
        for(int j = 0; j < size; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i==j){
                sum += arr[i][j];
            }
        }
    }
    cout<<"Sum of diagonal elements is "<<sum<<endl;
    return 0;
}