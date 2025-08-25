#include<iostream>
using namespace std;

//右值
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a0{1};
    int a1{2};
    int a2{3};
    //都是左值
    cout << &a0 << endl;
    cout << &a1 << endl;
    cout << &a2 << endl;

    int x{0};
    x = a1 + a2; //a1 + a2是右值,不能获取右值的地址，值copy
    int &&result1 = a0 + a1;//不是值copy,速度更快
    cout << result1 << endl;
    x = add(a1, a2);
    int &&result2 = add(a1, a2);
    cout << result2 << endl;
    
    return 0;
}