#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,c;
        cin>>a >>c;

        int b;
        if((a+c)%2==0){
            cout<<(a+c)/2 <<'\n';
        }
        else{
            cout<<"-1" <<endl;
        }
    }
    return 0;
}