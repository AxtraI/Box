#include <iostream>
#include <math.h>

using namespace std;

int main(void){
	int n = 1, a;
	double es = 0, k = 0, e;
	cin >> es;
	e = exp(1.0);
	while (fabs(k - e)>es){
		n++;
		k = pow((1 + 1.0 / n), n);
	}
	cout << k << " " << e << "  " << n;
	cin >> a;
	return 0;
}
