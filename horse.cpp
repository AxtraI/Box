#include <iostream>
#include<iomanip>

using namespace std;

int main(){
    int x, y, a;
    cin >> x >> y;
    cout << x + 1 << " " << y + 2 << endl;
    cout << x + 2 << " " << y + 1 << endl;
    if (x > 1)
       cout << x - 1 << "-" << y + 2 << endl;
    if (y > 1)
       cout << x + 2 << "-" << y - 1 <<endl;
    if (x > 2)
       cout << x - 2 << "-" << y + 1 << endl;
    if (y > 2)
       cout << x + 1 << "-" << y - 2 << endl;
    if (x > 2 && y > 1)
       cout << x - 2 << "-" << y - 1 << endl;
    if (y > 2 && x > 1)
       cout << x - 1 << "-" << y - 2 << endl;
	cin >> a;
	return 0;
}
