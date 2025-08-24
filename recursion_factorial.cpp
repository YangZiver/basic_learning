#include<iostream>
using namespace std;

int Factorial(int);

int main(int argc, char* argv[])
{
    int count{0};
    cin >> count;
    cout << "Factorial " << count << " : " << Factorial(count) << endl;
    return 0;
}

int Factorial(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        int result = number * Factorial(number - 1);
        return result;

    }
}
