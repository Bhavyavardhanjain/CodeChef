// Link of the question
// https://www.codechef.com/problems/KITCHENTIME
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    if(t>=1 && t<=100){
        for(int i=0;i<t;i++){
            int x,y;
            cin>>x>>y;
            if(x>=1 && y>x && y<=12){
                int j=y-x;
                cout<<j<<"\n";
            }
        }
    }
	return 0;
}
