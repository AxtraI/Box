#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
	int a;
	float i = 0;
	unsigned k;
	cin >> k;
	while (i <= k){
		if (i){
			cout << fixed << setprecision(4) << i << " " << fixed << setprecision(4) << i * 1.609344 << endl;
			cout << fixed << setprecision(4) << double(ceil(i)) << " " << fixed << setprecision(4) << double(ceil(i)) * 1.609344 << endl;
		}
		i += 0.6214;
	}
	cin >> a;
	return 0;
}