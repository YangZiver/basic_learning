#include<iostream>
using namespace std;

int main()
{
    //引用与指针的不同
    double value{13.13};
    double &refValue{value};
    double *pValue{&value};
    //读取
    cout << "pValue: " << pValue << endl;
    cout << "value: " << value << "     "
         << "refValue: " << refValue << "     "
         << "pValue: " << *pValue << endl;
    //修改
    *pValue = 13.1;
    cout << "value: " << value << "     "
         << "refValue: " << refValue << "     "
         << "pValue: " << *pValue << endl;
    refValue = 13.13;
    cout << "value: " << value << "     "
         << "refValue: " << refValue << "     "
         << "pValue: " << *pValue << endl;
    
    //引用可以变成其他值的引用吗？
    cout << "value address: " << &value << " : " << pValue << endl;
    double otherValue = 1.3;
    refValue = otherValue;
    cout << "value: " << value << "     "
         << "refValue: " << refValue << "     "
         << "pValue: " << *pValue << "      "
         << "pointer address: " << pValue << endl;
    
    double otherValue0 = 1.7;
    *pValue = otherValue0;
    cout << "value: " << value << "     "
         << "refValue: " << refValue << "     "
         << "pValue: " << *pValue << "      "
         << "pointer address: " << pValue << endl;
    
    double otherValue1 = 1.8;
    pValue = &otherValue1;
    cout << "otherValue1 address: " << &otherValue1 << endl;
    cout << "value: " << value << "     "
         << "value address: " << &value << "        "
         << "refValue: " << refValue << "     "
         << "pValue: " << *pValue << "      "
         << "pointer address: " << pValue << endl;
    cout << "--------Ziver--------" << endl;
    return 0;
}