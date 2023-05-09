// Link of the question
// https://www.codechef.com/problems/SLOWSOLN
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>=1 && t<=1000){
	    for(int j=0;j<t;j++){
    	    int maxt,maxn,sumn;
    	    cin>>maxt>>maxn>>sumn;
    	    if(maxt>=1 && maxn>=maxt && sumn>=maxn && sumn<=10000){
    	        if(maxt*maxn<=sumn){
    	            int f=0;
    	            for(int i=0;i<maxt;i++){
    	                f=f+(maxn*maxn);
    	            }
    	            cout<<f<<"\n";
    	        }
    	        else{
    	            int f=0;
    	            while(sumn>0){
    	                if(sumn>maxn){
    	                    sumn=sumn-maxn;
    	                    f=f+(maxn*maxn);
    	                }
    	                else{
    	                    f=f+(sumn*sumn);
    	                    sumn=0;
    	                }
    	            }
    	            cout<<f<<"\n";
    	        }
    	    }
	    }
	}
	return 0;
}
