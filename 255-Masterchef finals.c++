// Link of the question
// https://www.codechef.com/problems/TOP10
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    for(int i=0;i<t;i++){
    	    int x;
    	    cin>>x;
    	    if(x>=1 && x<=100){
    	        if(x<=10){
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
