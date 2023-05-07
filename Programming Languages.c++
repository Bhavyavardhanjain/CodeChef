// Link of the question
// https://www.codechef.com/problems/PROGLANG
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=288){
	    for(int i=0;i<t;i++){
	        int a,b,a1,b1,a2,b2;
	        cin>>a>>b>>a1>>b1>>a2>>b2;
	        if(a>=1 && b2<=4 && a!=b && a1!=b1 && a2!=b2){
	            if((a==a1 || a==b1) && (b==a1 || b==b1)){
	                    cout<<"1"<<"\n";
	                }
	            else if((a==a2 || a==b2) && (b==a2 || b==b2)){
	                    cout<<"2"<<"\n";
	                }
	            else{
	                cout<<"0"<<"\n";
	            }
	        }
	    }
	}
	return 0;
}
