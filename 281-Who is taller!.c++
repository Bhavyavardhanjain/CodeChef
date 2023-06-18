// Link of the question
// https://www.codechef.com/problems/TALLER
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=1000){
	    for(int i=0;i<t;i++){
	        int x,y;
	        cin>>x>>y;
	        if(x>=100 && y<=200 && x!=y){
	            if(x>y){
	                cout<<"A"<<"\n";
	            }
	            else{
	                cout<<"B"<<"\n";
	            }
	        }
	    }
	}
	return 0;
}
