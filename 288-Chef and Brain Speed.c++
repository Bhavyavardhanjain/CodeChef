// Link of the question
// https://www.codechef.com/problems/CBSPEED
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin>>x>>y;
	if(x>=1 && y<=100){
	    if(x<y){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	}
	return 0;
}
