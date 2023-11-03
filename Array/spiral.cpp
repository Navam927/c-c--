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
    int left = 0, right = size-1;
    int top = 0, bottom = size-1 ;
    while(top<=bottom)
    {
        for(int i = left; i <= right; i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i = top; i <= bottom; i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;
        for(int i = right; i >= left; i--)
        {
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        for(int i = bottom; i >= top; i--)
        {
            cout<<arr[i][left]<<" ";
        }left++;
    }

    return 0;
}