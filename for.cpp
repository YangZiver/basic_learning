#include<iostream>

using namespace std;

int main()
{
    for (size_t i{0}; i <=10; ++i)
    {
        cout << i << endl;
    }
    //数组与for循环
    int arr1[]{1, 2, 3, 4};
    //数组的长度
    int arrSize{sizeof(arr1) / sizeof(arr1[0])};
    cout << "Size: " << arrSize << endl;
    for (size_t i{0}; i < arrSize; ++i)
    {
        cout << arr1[i] << endl;
    }
    //auto
    for (auto x : arr1)
    {
        cout << x << endl;
    }
    for (size_t i{0}; i <= 20; ++i)
    {
        if ((i % 2) != 0)
            cout << i << endl;
    }
    
    
    return 0;
}