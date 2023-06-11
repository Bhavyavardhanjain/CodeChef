// Link of the question
// https://www.codechef.com/problems/TIMELY
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=60){
	    for(int i=0;i<t;i++){
	        int x;
	        cin>>x;
	        if(x>=30){
	            cout<<"YES"<<"\n";
	        }
	        else{
	            cout<<"NO"<<"\n";
	        }
	    }
	}
	return 0;
}
