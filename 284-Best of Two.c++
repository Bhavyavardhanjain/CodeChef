// Link of the question 
// https://www.codechef.com/problems/BESTOFTWO
#include <iostream>
using namespace std;
int main() {
	int N, x, y;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> x >> y;
		if (x > y) {
			cout << x << endl;
		}
		else {
			cout << y << endl;
		}
	}
}