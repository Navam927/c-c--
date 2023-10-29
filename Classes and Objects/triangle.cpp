#include<iostream>
#include<math.h>
using namespace std;

class Triangle{
    public:
    float a,b,c,s,perimeter; 
    float area;
    void printArea();
    void printPerimeter();

};
void Triangle::printArea(){
    s = (a+b+c)/2;
    area = sqrt(static_cast<double>(s * (s - a) * (s - b) * (s - c)));
    cout<<"Area of triangle is: "<<area<<endl;
}
void Triangle::printPerimeter(){
perimeter = a+b+c;
cout<<"Perimeter of triangle is "<<perimeter<<endl;
} 

int main() {
    Triangle T;
    T.a = 2;
    T.b = 3;
    T.c = 4;
    T.printArea();
    T.printPerimeter();
    return 0;
}