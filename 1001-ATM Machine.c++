// Link of the question
// https://www.codechef.com/problems/ATM2
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    for(int i=0;i<t;i++){
	        int n,k;
	        cin>>n>>k;
	        if(n>=1 && n<=100 && k>=1 && k<=1000000){
	            int a[n];
	            for(int j=0;j<n;j++){
	                int x;
	                cin>>x;
	                if(x>=1 && x<=1000000){
	                    a[j]=x;
	                    k=k-x;
	                    if(k>=0){
	                        cout<<"1";
	                    }
	                    else{
	                        cout<<"0";
	                        k=k+x;
	                    }
	                }
	            }
	            cout<<"\n";
	            
	        }
	    }
	}
	return 0;
}
