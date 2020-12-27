#include <iostream>

using namespace std;

int main(void) {
	int d, min, sec,a;
	double r=0.0;
	cout << "Enter degree: ";
	cin >> d;
	cout << "Enter minute: ";
	cin >> min;
	cout << "Enter second: ";
	cin >> sec;
	r = d + (min + sec/60.0)/60.0;
	r = r * 3.141592653589793 /180;
	cout << "radians= "<<r<<endl;
	cin >> a;
}