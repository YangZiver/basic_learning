#include<iostream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
    //cin,cout
    string num1, num2;
    cout << "Enter number 1:";
    cin >> num1;
    cout << "Enter number 2:";
    cin >> num2;
    int number1 = stoi(num1);
    int number2 = stoi(num2);
    //cout
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    //printf
    printf("%d + %d = %d\n", number1, number2, number1 + number2);
    //argc 命令行参数的数量 argv[]为命令行参数的字符串列表
    if (argc > 1)
    {
        cout << "You input " << argc << " arguments:" << endl;
        for(int i = 1; i < argc; i++)
        {
            cout << "Arg: " << i << " : " << argv[i] << endl;
        }
    }
    return 0;
}