// Link of the question
// https://www.codechef.com/problems/EZSPEAK
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    for(int i=0;i<t;i++){
	        int n,c=0;
	        string s;
	        cin>>n;
	        cin>>s;
	        if(n>=1 && n<=100){
    	        for(int j=0;j<n;j++){
    	            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
    	                c=0;
    	            }
    	            else{
    	                c+=1;
                        if(c>=4){
                            break;
                        }
    	            }
    	        }
    	        if(c>=4){
    	            cout<<"NO"<<"\n";
    	        }
    	        else{
    	            cout<<"YES"<<"\n";
    	        }
	            
	        }
	    }
	}
	return 0;
}
