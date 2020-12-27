#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int r1 = 0, r2=0, m=0, n,  i, j, a;
	for (n=1000; n<=9999; n++) {
		r1 = (n % 10) + (n / 1000) + 2;
		r1 = pow(r1, 2.0);
		r2 = r1 % 16;
			while (r1 != 0) {
				j = r1 % 16;
				r2 = r2 + j * 10;
				r1 = r1 / 16;
			}
		if (r2 > m) m = r2;
	}
	cout << m << endl;
	cin >> a;
	return 0;
}