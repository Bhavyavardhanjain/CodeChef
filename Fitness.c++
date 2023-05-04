// Link of the question
// https://www.codechef.com/problems/FIT
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=10){
	    for(int i=0;i<t;i++){
	        int x;
	        cin>>x;
	        int j=10*x;
	        cout<<j<<"\n";
	    }
	}
	return 0;
}
