#include <iostream>

using namespace std;

int main (void) {
	int d2, min2, sec, a;
	double r, d1=0.0, min1=0.0;
	cout << "Enter radians: "<<endl;
	cin >> r;
	d1 = r * 180 / 3.141592653589793;
	d2 = (int)d1;
	min1 = (d1 - d2) * 60;
	min2 = (int)min1;
	sec = (int)((min1-min2)*60);
	cout << "Degree= "<<d2<<endl;
	cout << "Minutes= "<<min2<<endl;
	cout << "Seconds= "<<sec<<endl;
	cin >> a;
	return 0;
}