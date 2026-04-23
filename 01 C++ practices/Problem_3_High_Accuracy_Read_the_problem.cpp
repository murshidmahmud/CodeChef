// Update the program below to solve the problem
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        
        int a;
        if(a==x%3) cout<<a <<endl;
        else if(a==((x+1)%3)) cout<<1 <<endl;
        else if(a==((x+2)%3)) cout<<2 <<endl;
    }
    return 0;
}