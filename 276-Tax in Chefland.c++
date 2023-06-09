// Link of the question
// https://www.codechef.com/problems/TAXES
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    for(int i=0;i<t;i++){
	        int x;
	        cin>>x;
	        if(x>100){
	            cout<<x-10<<"\n";
	        }
	        else{
	            cout<<x<<"\n";
	        }
	    }
	}
	return 0;
}
