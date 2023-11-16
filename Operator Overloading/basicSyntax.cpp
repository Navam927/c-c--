#include<iostream>
using namespace std;

class ABC
{
    public:
        int x;
    ABC operator+(ABC temp)
    {
        ABC obj4;
        obj4.x = temp.x + x;
        cout << obj4.x;
        return obj4;
    }
};

int main()
{
    ABC obj1,obj2,obj3;
    obj1.x = 2;
    obj2.x = 3;
    obj3 = obj1 + obj2;
    return 0;
}