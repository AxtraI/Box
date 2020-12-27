#include <iostream>

using namespace std;

int main(void){
	int a, b, c, x, y, w;
	cout << "a= "<<endl;
	cin >> a;
	cout << "b= "<<endl;
	cin >> b;
	cout << "c= "<<endl;
	cin >> c;
	x = -b/(2 * a);
	y = a * x * x + b * x + c;
	cout << "x= "<<x<<endl;
	cout << "y= "<<y<<endl;
	cin >> w;
	return 0;
}