#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n),b;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        b = a;
        sort(b.begin(), b.end());

        vector<int> evena, odda, evenb, oddb;

        for(int i=0; i<n; i++){
            if(i%2==0){
                evena.push_back(a[i]);
                evenb.push_back(b[i]);
            }
            else{
                odda.push_back(a[i]);
                oddb.push_back(b[i]);
            }
        }

        sort(evena.begin(), evena.end());
        sort(odda.begin(), odda.end());
        sort(evenb.begin(), evenb.end());
        sort(oddb.begin(), oddb.end());

        if(evena == evenb && odda == oddb){
            cout<<"Yes \n";
        }
        else{
            cout<<"No \n";
        }
    }
    return 0;
}