#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x >>y;

        int sum = min(x,y);

        int sell = sum+2*(y-sum);
        cout<<sell <<endl;
    }
    return 0;
}