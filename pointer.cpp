#include<iostream>
using namespace std;

int main()
{
    cout << sizeof(int *) << endl;
    cout << sizeof(double *) << endl;
    int intValue{13};
    int *pDouble{&intValue};
    //指针的初始化
    //指向栈
    int n{12};
    int *pNumber{&n};
    cout << *pNumber << endl;

    //指向堆
    int *pNumber0{new int{13}};
    delete pNumber0;//只是放弃控制
    pNumber0 = nullptr;//清空
    pNumber0 = new int{19};
    cout << *pNumber0 << endl;

    int *pNumber1{new int{14}};//若不删除并清空则14会泄露
    delete pNumber1;
    pNumber1 = nullptr;
    pNumber1 = new int{32};
    delete pNumber1;
    pNumber1 = nullptr;//申请一块堆内存后不用了要及时删除并清空

    cout << "-----Ziver------" << endl;
    return 0;
}