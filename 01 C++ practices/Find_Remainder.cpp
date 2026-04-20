#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a >>b;

        int avg = a%b;

        cout<<abs(avg) <<endl;
    }
    return 0;
}