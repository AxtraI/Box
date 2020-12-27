#include <iostream>

using namespace std;

int main(void) {
	float t1, t2, t3, v1, v2, v3, n1, n2, a;
	cout << "Enter t1: "; 
	cin >> t1;
	cout << "Enter v1: "; 
	cin >> v1;
	cout << "Enter t2: "; 
	cin >> t2;
	cout << "Enter v2: "; 
	cin >> v2;
	cout << "Enter t3: "; 
	cin >> t3;
	cout << "Enter v3: "; 
	cin >> v3;
	n1 = (t1 * v1 + t2 * v2 + t3 * v3)/2;
	if (n1/v1<=t1) 
	{	
		n2 = n1 / v1;
		cout << n1 << endl;
	}
	else
	{	
		n1 = n1 - t1 * v1;
			if (n1 / v2 <= t2)
			{
				n2 = t1 + n1 / v2;
			}
			else
			{
				n1 = n1 - t2 * v2;
			n2 = t1 + t2 + n1 / v3;			
			}
	cout << n2 << endl;
	}
	cin >> a;
	return 0;
}