#include <iostream>
using namespace std;

int main()
{
    //%1
    int t;
    cout << "quantity seconds?" << endl;
    cin >> t;
    cout << t / 3600 << " hours " << (t % 3600 / 60) << " minuts " << (t % 3600 % 60) << " seconds";

    //%2
    float money;
    int a,b;
    cout << "enter a monetary unit" << endl;
    cin >> money;
    a = money;
    b = (money - a) * 100;
    cout << a << " rubles " << b << " kopecks ";

    //%3
    int day1,week,day2;
    cout << "quantity day" << endl;
    cin>>day1;
    week = day1 / 7;
    day2 = day1 % 7;
    cout << "week:" << week << "  day:" << day2;
}
