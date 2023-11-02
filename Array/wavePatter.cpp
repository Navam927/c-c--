#include<iostream>
using namespace std;
#define size 40
int main()
{
    int n;
    cout<<"Enter the size of nxn array ";
    cin >> n;
    cout<<endl;
    cout<<"Enter elements to "<<n<<" x "<<n <<" array"<<endl;
    int arr[size][size];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cout<<"Your array is "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        } 
        cout<<endl;
    }

    for(int j = 0; j < n; j++)
    {
        if(j%2==0)
        {
            for(int i = n-1; i >=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
           for(int i = 0; i < n; i++)
           {
            cout<<arr[i][j]<<" ";
           }
        }
    }
    return 0;
}