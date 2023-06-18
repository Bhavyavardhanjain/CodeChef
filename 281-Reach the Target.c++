// Link of the question
// https://www.codechef.com/problems/REACHTARGET
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=10){
	    for(int i=0;i<t;i++){
	        int x,y;
	        cin>>x>>y;
	        if(y>=50 && x>y && x<=200){
	            cout<<x-y<<"\n";
	        }
	    }
	}
	return 0;
}
