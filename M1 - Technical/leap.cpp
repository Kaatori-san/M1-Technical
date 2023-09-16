#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    {
        if ((year%4)==0)
        {
            cout<<"Leap Year";
        }
        else
        {
            cout<<"Not a Leap Year";
        }
        
    }
    return 0;
}
