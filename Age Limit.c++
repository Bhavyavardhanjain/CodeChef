// Link of the question
// https://www.codechef.com/problems/AGELIMIT
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=1000){
    	for(int i;i<t;i++){
    	    int x,y,a;
    	    cin>>x>>y>>a;
    	    if(x>=20 && x<y && y<=40 && a>=10 && a<=50){
    	        if(a>=x && a<y){
    	            cout<<"YES"<<"\n";
    	        }
    	        else{
    	            cout<<"NO"<<"\n";
    	        }
    	    }
    	}
	}
	return 0;
}
