#include<iostream>
#include<cmath>
#include <cstdlib> // 包含 rand() 和 srand()
#include <ctime>  
using namespace std;

int main()
{
    cout << "abs(-19) = " << abs(-19) << endl;
    cout << "max(5, 4) = " << max(5, 4) << endl;
    cout << "min(5, 4) = " << min(5, 4) << endl;
    cout << "floor(10.5) = " << floor(10.5) << endl;//直接省略小数部分
    cout << "round(10.5) = " << round(10.5) << endl;//四舍五入
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
    cout << "sqrt(100) = " << sqrt(100) << endl;

    cout << "exp(1): " << exp(1) << endl;//e的1次方
    cout << "exp2(1): " << exp2(1) << endl;//2的1次方
    cout << "exp2(2): " << exp2(2) << endl;//2的2次方

    cout << "log(20): " << log(20) << endl;//ln(20)
    cout << "log2(8): " << log2(8) << endl;
    
    //随机函数
    srand(time(NULL));
    for (size_t i{0}; i < 10; ++i)
    {
        int secret = rand() % 10;
        cout << "secret: " << secret << endl;
    }


    return 0;
}