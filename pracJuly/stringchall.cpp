#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "rohit";
    //convert upper case..//
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>= 'a' && s[i]<= 'z')
        {
            s[i] -= 32;
        }
    }
    cout<<s<<endl;
    
    //convert lower case..//
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>= 'A' && s[i]<= 'Z')
        {
            s[i] += 32;
        }
    }
    cout<<s<<endl;
    
    return 0;
}