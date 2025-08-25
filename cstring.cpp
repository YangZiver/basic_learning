#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const char* stringName0{"YangZiver"};
    char first_name[]{"Ziver"};
    char last_name[]{"Yang"};
    //字符串的长度
    cout << "len: " << strlen(first_name) << endl;
    cout << "len: " << strlen(last_name) << endl;
    
    //比较大小
    cout << strcmp(first_name, last_name) << endl;
    if (strcmp(first_name, last_name) > 0)
    {
        cout << first_name << endl;
    }
    else
    {
        cout << last_name << endl;
    }
    //拼接和复制
    cout << "strcat && strcpy" << endl;
    cout << strcat(first_name, last_name) << endl;
    cout << first_name << " : " << last_name << endl;
    cout << "strcat && strcpy" << endl;
    cout << strcpy(first_name, last_name) << endl;
    cout << first_name << " : " << last_name << endl;
    
    char c1[]{"yzyyyz"};
    char c2[]{"abcdddefrtgvdmnhdyd"};
    //查找
    cout << strchr(c2, 'd') << endl;//查找第一个'd'返回这个'd'和剩下的字符
    cout << strrchr(c2, 'd') << endl;//查找最后一个'd'返回这个'd'和剩下的字符

    const char* pChar{c2};
    int index{0};
    while ((pChar = strchr(pChar, 'd')) != nullptr)
    {
        cout << "get index at " << index << " -> " << pChar << endl;
        ++index;
        ++pChar;
    }

    return 0;
}