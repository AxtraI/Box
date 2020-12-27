#include<iostream>

using namespace std;

	int main(){ 
		int n = 0, y = 0, p, v, s,a; 
		float k; 
		cout << "credit amount "; 
		cin >> s; 
		cout << "loan percentage "; 
		cin >> p; 
		cout << "profit for year "; 
		cin >> v; 
		int res = s / 100 * p; 
		if (res >= v) cout << "The loan will not be repaid"; 
		else 
		{ 
		while (n < s) 
		{ 
		s += res; 
		n += v; 
		++y; 

		} 
		cout << "The loan will be repaid for " << y; 
		} 
		cin >> a; 
		return 0; 
	}