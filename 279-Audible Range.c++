// Link of the question
// https://www.codechef.com/problems/AUDIBLE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=10000){
	    for(int i=0;i<t;i++){
	        int x;
	        cin>>x;
	        if(x>=67 && x<=45000){
	            cout<<"YES"<<"\n";
	        }
	        else{
	            cout<<"NO"<<"\n";
	        }
	    }
	}
	return 0;
}
