#include <iostream> 
using namespace std;
int main(void){
	int n, x, y, z, k, a;
	cout << "enter the number " ;
	cin >> n;
	x = n % 10;
	y = n / 10;
	z = y % 10;
	k = y / 10;
	if ((x + z + k) % 3 == 0)
		cout << "number " << n << " divisible by 3";
	else
		cout << "number " << n << " not divisible by 3";
	cin >> a;
	return 0;
}