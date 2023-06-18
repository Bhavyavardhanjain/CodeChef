// Link of the question
// https://www.codechef.com/problems/MY1STCONTEST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n>>a>>b;
	if(n>=2 && n<=1000 && a>=1 && a<=1000 && b>=1 && b<=1000 && a+b<=n)
	{
	    cout<<n-a<<"\t"<<n-a-b;
	}
	return 0;
}
