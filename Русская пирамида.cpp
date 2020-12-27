#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
        int s, r, x, i, y, a;
        const double pi = 3.14159265359;
        cout << "Enter the side of a right triangle " << endl;
        cin >> s;
        cout << "Enter the radius of the circle " << endl;
        cin >> r;
		x = ((s * s * ((sqrt(3.0))) / 4));
        i = pi * r * r;
        if (x > i) y = x / i;
            cout << "Number of circles " << y;
            if (x < i) cout << "No";
			cin >> a;
            return 0;
}