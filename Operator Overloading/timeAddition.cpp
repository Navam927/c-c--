#include<iostream>
using namespace std;

class Time
{
    private:
        int hours,minutes;
    public:
        void getTime()
        {
            cout << "Enter hours ";
            cin >> hours;
            cout << "Enter minutes ";
            cin >> minutes;
        }

        Time()
        {
            hours = 0;
            minutes = 0;
        }
        Time(int h, int m)
        {
            hours = h;
            minutes = m;
        }
        Time operator+(const Time &obj)
        {
            Time result;
            result.hours = hours + obj.hours;
            result.minutes = minutes + obj.minutes;

            result.hours += result.minutes/60;
            result.minutes %= 60;
            result.hours %= 24;
            return result;
        }
        void displayTime()
        {
            cout << hours <<"hrs "<<minutes <<"min"<<endl;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.getTime();
    t2.getTime();
    t3 = t1+t2;
    t3.displayTime();
    return 0;
}