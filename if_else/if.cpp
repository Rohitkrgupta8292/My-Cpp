#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"N: ";
    cin>>n;

    if(n%2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    cout<<endl;
    
    return 0;
}