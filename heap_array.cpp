#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    //在堆上的数组
    double *pArray{new double[13]{1.2, 4.3}};
    if (pArray != nullptr)
    {   for (size_t i = 0; i < 13; i++)
        {
            cout << "index: " << i << "value: " << pArray[i] << "\n";
        }
    }
    delete[] pArray;
    pArray = nullptr;
    //在栈上的数组
    double arr[13]{123, 34, 2};
    if (pArray != nullptr)
        cout << "arr sizeof: " << sizeof(arr) / sizeof(arr[0]) << " pArray sizeof: " << sizeof(pArray) / sizeof(pArray[0]) << endl;
    //c++
    cout << "arr size: " << size(arr) << endl;
    for (auto i : arr)
        cout << i << endl;
    



    cout << "------Ziver----------" << "\n";
    return 0;
}