#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    //判断是否是字符和数字，非0为真，0为假
    cout << "isalnum" << endl;
    cout << isalnum('A') << endl;
    cout << isalnum('e') << endl;
    cout << isalnum('1') << endl;
    cout << isalnum('^') << endl;

    //判断是否是字符
    cout << "isalpha" << endl;
    cout << isalpha('A') << endl;
    cout << isalpha('e') << endl;
    cout << isalpha('1') << endl;
    cout << isalpha('^') << endl;
    //判断是否为数字
    cout << "isdigit" << endl;
    cout << isdigit('A') << endl;
    cout << isdigit('e') << endl;
    cout << isdigit('1') << endl;
    cout << isdigit('^') << endl;
    
    cout << "isblank" << endl;
    string msg{"hello YangZiver Ziver"};
    int blankNum{0};
    for (auto i : msg)
    {
        if (isblank(i))
        {
            blankNum++;
        }
    }
    cout << "blankNum: " << blankNum << endl;
    //判断大小写
    cout << "islower isupper" << endl;
    cout << islower('a') << endl;
    cout << isupper('A') << endl;
    cout << islower('*') << endl;
    //用引用进行修改
    for (auto &i : msg)
    {
        i = toupper(i);
    }
    cout << msg << endl;
    for (auto &i : msg)
    {
        i = tolower(i);
    }
    cout << msg << endl;
    return 0;
}