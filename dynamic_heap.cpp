#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    //在栈上应用指针
    int number{50};
    int *pNumber = &number;
    cout << number << " : " << *pNumber << endl;
    cout << &number << " : " << pNumber << endl;
    //在堆上应用指针
    int *pNumber0{nullptr};
    pNumber0 = new int;//这个地址就是固定的，我们可以将这个地址设定为一个数
    *pNumber0 = 13;
    cout << *pNumber0 << endl;
    delete pNumber0;
    pNumber0 = nullptr;//删除后并且变成空指针后不能再操作该指针否则后续程序不执行
    return 0;
}