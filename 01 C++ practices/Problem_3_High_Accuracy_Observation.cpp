#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    
    while(cin>>x)
    {

        int a;
        if(a==x%3) cout<<a <<endl;
        else if(a==((x+1)%3)) cout<<1 <<endl;
        else if(a==((x+2)%3)) cout<<2 <<endl;
    }
    return 0;
}