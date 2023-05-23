// Link of the question
// https://www.codechef.com/problems/DETSCORE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    for(int i=0;i<t;i++){
	        int x,n;
	        cin>>x>>n;
	        int j=(x/10)*n;
	        cout<<j<<"\n";
	    }
	}
	return 0;
}
