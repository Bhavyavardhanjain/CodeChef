// Link of the question
// https://www.codechef.com/problems/CANDIVIDE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    for(int i=0;i<t;i++){
    	    int n;
    	    cin>>n;
    	    if(n>=1 && n<=100){
    	        if(n%3==0){
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
