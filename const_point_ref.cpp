#include<iostream>
using namespace std;

int main()
{
    /*
    //const与指针
    double n{1.4};
    const double *p{&n};//p可以切换指向的地址，但不能用解引用*p去改动此地址中的值
    double m{1.5};
    cout << "p address: " << p << endl;
    p = &m;
    cout << "p address: " << p << endl;
    */
    double n{1.4};
    double *const p{&n};//p不可以切换指向的地址，但可以用解引用*p去改动此地址中的值
    double m{1.5};
    cout << "p address: " << p << endl;
    *p = m;
    cout << "p address: " << p << endl;
    cout << "p value: " << *p << endl;

    const double *const const_p{&n};//既不能改变指向地址，也不能用解析引用去改动此地址的值

    cout << "---------Ziver-------------" << endl;
    return 0;
}