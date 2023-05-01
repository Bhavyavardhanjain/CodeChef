// Link of the question
// https://www.codechef.com/problems/TAXSAVING

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
	        if(y>=1 && x>y && x<=100){
	            int j=x-y;
	            cout<<j<<"\n";
	        }
	    }
	}
	return 0;
}
