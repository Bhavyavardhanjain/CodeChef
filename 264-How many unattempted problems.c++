// Link of the question
// https://www.codechef.com/problems/PRACLIST
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin>>x>>y;
	if(y>=1 && x>=y && x<=1000){
	    cout<<x-y<<"\n";
	}
	return 0;
}
