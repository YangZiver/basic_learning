#include<iostream>

using namespace std;
int main()
{
    int cal{0};
    while (cal < 10)
    {
        cout << cal + 1 << endl;
        cal++;
    }
    cout << "end loop" << endl;
    cout << "Cal: " << cal << endl;
    int Count{0};
    cin >> Count;
    int i{1};
    int sum{0};
    int step{0};
    while (i <= Count)
    {
        cin >> step;
        sum += step;
        i ++;
    }
    cout << "Sum: " << sum << endl;
    
    return 0;
}