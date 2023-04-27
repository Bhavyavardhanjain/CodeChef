// Link of the question
// https://www.codechef.com/problems/GDTURN

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    for(int i=0;i<t;i++){
	        int x,y;
	        cin>>x>>y;
	        if(x+y>6){
	            cout<<"YES"<<"\n";
	            
	        }
	        else{
	            cout<<"NO"<<"\n";
	        }
	    }
	    
	}
	return 0;
}
