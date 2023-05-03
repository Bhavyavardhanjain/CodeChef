// Link of the question
// https://www.codechef.com/problems/BIRYANI
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=10000){
	    for(int i=0;i<t;i++){
	        int x,y;
	        cin>>x>>y;
	        cout<<x*y<<"\n";
	    }
	}
	return 0;
}
