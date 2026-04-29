#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y;
    cin>>x >>y;

    int a = x*100;
    int b = y-x;
    int c = b*150;

    cout<<a+c <<endl;
    return 0;
}