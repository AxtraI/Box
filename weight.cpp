#include <iostream>

using namespace std; 

int main(void){
	int x[] = { 1,2,3,5,10,20,50,100,200,500,1000 };
	int w, a;
	cout << "enter weight" << endl;
	cin >> w;
	int n = sizeof(x) / sizeof(a[x]);
	for (int i = n; i > 0; i--)
	{
		if (w > x[i]) { w = w - x[i]; }
	}
	cin >> a;
	return 0;
}
