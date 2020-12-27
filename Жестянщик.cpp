#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int  a, b, c, d, v1, k;
	double ma = 0.0, mb = 0.0, R;
		cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
        cout << "Enter d: ";
        cin >> d;
        cout << "Enter R: ";
        cin >> R;
	if (ma < a) {
		ma = a;
			if (ma < b) {
				ma = b;
			}
	}
	if (mb < c) {
		mb = c;
			if (mb < d) {
				mb = d;
			}
	}
	v1 = sqrt(ma * ma + mb * mb);
	if (v1 <= 2 * R) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
	cin >> k;
	return 0;
}