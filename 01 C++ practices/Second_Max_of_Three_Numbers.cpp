#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a >>b >>c;

        vector<int> x = {a,b,c};

        sort(x.begin(), x.end());

        cout<<x[1] <<endl;
    }
    return 0;
}