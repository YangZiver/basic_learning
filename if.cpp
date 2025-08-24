#include<iostream>

using namespace std;

int main()
{
    int scores{0};
    cout << "Please enter your scores:" << endl;
    cin >> scores;
    if (scores > 90)
    {
        cout << " A " << endl;
    }
    else if (scores > 75)
    {
        cout << " B " << endl;
    }
    else if (scores > 60)
    {
        cout << " C " << endl;
    }
    else
    {
        cout << "You do not pass the exam!!! " << endl;
    }



    
    return 0;
}