#include<iostream>
#include<string>
using namespace std;

int main()
{
    //字符串拼接+
    string h{"hello"};
    string z{"ziver"};
    string hello{h + " " + z};
    cout << hello << endl;
    //append
    string hello2{z.append("yang", 0, 2)};
    cout << hello2 << endl;
    //size capacity
    cout << hello2.size() << endl;
    cout << hello2.capacity() << endl;
    for (auto i : hello2)
    {
        cout << i << " ";
    }
    cout << "\n" << "--------Ziver-----" << endl;
    for (size_t i{0}; i < hello2.size(); i++)
    {
        cout << hello2.at(i) << " ";
    }
    cout << endl;
    cout << hello2.front() << endl;//第一个
    cout << hello2.back() << endl;//最后一个
    if (hello2.find("a") != string::npos)
    {
        cout << "get position of 'a' " << hello2.find("a") << endl;
    }

    return 0;
}