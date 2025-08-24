#include<iostream>
using namespace std;

int addAge(int);
void addAgePoint(int &);
int main()
{
    int age{45};
    int newAge{addAge(45)};
    cout << "newAge: " << newAge << endl;
    cout << "age: " << age << endl;
    cout << "&: " << &age << endl;
    addAgePoint(age);
    
    return 0;
}

int addAge(int age)
{
    int result{age + 1};
    return result;
}

void addAgePoint(int &age)//引用:改变原值但不改变地址
{
    ++(age);
    cout << "age: " << age << " &: " << &age << endl;
}
