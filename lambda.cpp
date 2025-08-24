#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    auto func = []()
    {
        cout << "Ziver" << endl;
    };
    int a{10};
    auto func0 = [a]()
    {
        cout << a << endl;
    };
    int b{20};
    auto func1 = [&b, a]()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        b++;
    };
    auto func2 = [=]()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    };
    auto func3 = [&]()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        a++;
        b++;
    };
    func();
    func0();
    func1();
    func2();
    func3();
    cout << a << endl;
    cout << b << endl;

    
    return 0;
}