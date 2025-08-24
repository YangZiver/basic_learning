#include<iostream>

using namespace std;

int main()
{
    int a{5};
    int b{3};

    //and
    int aAndb{a & b};
    cout << "a & b = " << aAndb << endl;
    //or
    int aOrb{a | b};
    cout << "a | b = " << aOrb << endl;
    //xor
    int aXorb{a ^ b};
    cout << "a ^ b = " << aXorb << endl;
    //~
    int x1{0};
    cout << "a ~ b = " << (~ x1) << endl;
    int x2{1};
    cout << "a ~ b = " << (~ x2) << endl;
    //位移运算
    int left{a << b};// *8
    cout << "left: " << left << endl;
    int right{a >> b};// /8
    cout << "right: " << right << endl;
    return 0;
}