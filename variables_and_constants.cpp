#include<iostream>
using namespace std;

//const 与 #define
#define DPI 44

//全局变量 一般不要用
int RandNum{0};
//常量,不可被修改
const double PI{3.14159265358979};
int main(int argc, char* argv[])
{
    cout << "RandNum: " << RandNum << endl;
    RandNum = 3;
    cout << "RandNum: " << RandNum << endl;
    cout << "PI: " << PI << endl;
    const int age = 45;
    const float oldWeight{88};
    //赋值 = , {}
    float nowWeight{oldWeight + 30};
    cout << "age: " << age << endl;
    cout << "weight: " << nowWeight << endl;
    int dpi_int{DPI}; 
    string dpi_str{DPI};
    cout << "dpi_int: " << dpi_int + 2 << endl;
    cout << "dpi_str: " << dpi_str << endl;
    cout << "dpi_str:" <<"44 ascii ',' " << endl;
    return 0;
}