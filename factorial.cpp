#include<iostream>
using namespace std;

int factorial(int number);
int main()
{
    int number{0};
    cin >> number;
    cout << factorial(number) << endl;
    return 0;
}
int factorial(int number)
{
    int result = 1;
    for (size_t i = 1; i <= number; ++i)
    {
        result *= i;
    }
    return result;
}
