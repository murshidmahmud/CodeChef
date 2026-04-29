#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a = 90;
	int b = 70;
	int c = 40;
	int mark;
	cin>>mark;
	
	if(mark>90){
	    cout<<"A" <<endl;
	}
	else if(mark>70){
	    cout<<"B" <<endl;
	}
	else if(mark>=40){
	    cout<<"C" <<endl;
	}
	else{
	    cout<<"F";
	}
    return 0;
}