// Link of the question
// https://www.codechef.com/problems/IPLTRSH

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=1000){
	    for(int i=0;i<t;i++){
	        int n,m;
	        cin>>n>>m;
	        if(n>=1 && m<=100000){
	            int j=n-m;
	            if(j>=0){
	                cout<<j<<"\n";
	            }
	            else{
	                cout<<"0"<<"\n";
	            }
	        }
	    }
	}
	return 0;
}
