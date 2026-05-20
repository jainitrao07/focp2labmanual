#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year:";
    cin>>year;
    if((year%4 == 0 && year%100!=0) || (year%400 ==0))
    {
        cout<<"It is a Leap Year";
    }
    else
    {
        cout<<"It is not a Leap Year";
    }
    return 0;
    
}
