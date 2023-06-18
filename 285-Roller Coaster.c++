// Link of the  question
// https://www.codechef.com/problems/MINHEIGHT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=1000){
	    for(int i=0;i<t;i++){
	        int x,h;
	        cin>>x>>h;
	        if(x>=1 && h<=100){
	            if(x>=h){
	                cout<<"YES"<<"\n";
	            }
	            else{
	                cout<<"NO"<<"\n";
	            }
	        }
	    }
	}
	return 0;
}
