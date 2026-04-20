#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        long long x,y,z;
        cin>>x >>y >>z;

        int a = x*5;
        int b = y*10;

        int sum = (a+b)/z;

        cout<<abs(sum) <<endl;
    }
    return 0;
}