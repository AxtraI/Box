#include<iostream>

using namespace std;

	int main() {
		int k, s,a;
		double p;
		cout << "Enter seed money "<<endl;
		cin >> k;
		cout << "Enter monthly % "<<endl;
		cin >> p;
		cout << "Enter amout money to buy shop "<<endl;
		cin >> s;
		int y = 0;
		p = p / 100 + 1;
		while (k < s)
			{
				k = k * p;
				y++;
			}
		cout<<y<<endl;
		cin >> a;
		return 0;
}