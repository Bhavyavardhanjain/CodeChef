// Link of the question
// https://www.codechef.com/problems/KNGTOR
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    for(int i=0;i<t;i++){
	        int n,m;
	        cin>>n>>m;
	        if(n>=0 && m<=100){
	            int j=n*5+m*7;
	            cout<<j<<"\n";
	        }
	    }
	}
	return 0;
}
