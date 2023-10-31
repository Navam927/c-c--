#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fact(n - 1) * n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = fact(n);
    cout << "Factorial of number is " << result << endl;
    return 0;
}