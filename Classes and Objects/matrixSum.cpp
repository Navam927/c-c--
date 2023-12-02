#include<iostream> 

#include<cstdio>  

#include<cmath>  

// Include headers as needed  

 
 

using namespace std; 

 
 

class Matrix{ 

private: 

int m,n; 

int arr[20][20]; 

public: 

Matrix(int x=0,int y=0){ 

m=x; 

n=y; 

} 

void readmat(){ 

for(int i=0;i<m;i++){ 

for(int j=0;j<n;j++){ 

cin >> arr[i][j]; 

} 

} 

}
Matrix operator+(Matrix mat1){ 

Matrix temp; 

temp.m=m; 

temp.n=n; 

for(int i=0;i<m;i++){ 

for(int j=0;j<n;j++){ 

temp.arr[i][j]= arr[i][j]+mat1.arr[i][j]; 

} 

} 

return temp; 

} 

void display(){ 

for(int i=0;i<m;i++){ 

for(int j=0;j<n;j++){ 

cout << arr[i][j]<< " "; 

} 

} 

cout << endl; 

} 

};  
int main(){ 

int m1,n1;  

cin>>m1>>n1;  

Matrix a(m1,n1),b(m1,n1),c(m1,n1);  

a.readmat();  

b.readmat();  

c = a + b;  

c.display();  

return 0;  

} 