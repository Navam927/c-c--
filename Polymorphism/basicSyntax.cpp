#include<iostream>
using namespace std;

class animal{
    public:
    void animalsound() {
        cout<<"The animal makes a sound"<<endl;
    }
};
class pig: public animal{
    public: 
    void animalsound() {
        cout<<"Wee wee!"<<endl;
    }
};
class crow: public animal{
    public:
    void animalsound() {
        cout<<"Kaa kaa"<<endl;
    }
};


int main() {
    animal myAnimal;
    pig myPig;
    crow myCrow;
    myAnimal.animalsound();
    myPig.animalsound();
    myCrow.animalsound();
    return 0;
}