// Link of the questions
// https://www.codechef.com/problems/BURGERS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=1000){
	    for(int i=0;i<t;i++){
	        int a,b;
	        cin>>a>>b;
	        if(a<=b){
	            cout<<a<<"\n";
	        }
	        else{
	            cout<<b<<"\n";
	        }
	    }
	}
	return 0;
}
