// Link of the question
// https://www.codechef.com/problems/SQUATS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=1000){
	    for(int i=0;i<t;i++){
	        int x,r;
	        cin>>x;
	        if(x>=1 && x<=100000){
	            r=x*15;
	            cout<<r<<"\n";
	        }
	    }
	}
	return 0;
}
