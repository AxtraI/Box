#include <iostream>

using namespace std;

int main(void) {
	float v1, v2, p, s, t, t1, i, a;
	cout << "Enter taxi speed: ";
	cin >> v1;
	cout << "Enter the taxi price: "; 
	cin >> p;
	cout << "Enter walking speed: "; 
	cin >> v2;
	cout << "Enter distance: "; 
	cin >> s;
	cout << "Enter the time: "; 
	cin >> t;
	t1 = 1;
	if (s / v1 > t) cout << "NO";
	else if (s / v1 == t)
		{
			i = s * p;
			cout << i << endl;
		}
	else
		{
			while ((s / v1) < t - t1);
			{
				s = s - v2 * t1;
				t1 = t1 + 1;
			}
			i = s * p;
			cout << "Cost " << i << endl;
		}
	cin >> a;
	return 0;
} 