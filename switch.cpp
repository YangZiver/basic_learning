#include<iostream>

using namespace std;

int main()
{
    //a+b,a-b,a*b,a%b
    int a{0}, b{0};
    char op{' '};
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "Sorry,I can't understand it!" << endl;
        break;
    }

    
    return 0;
}