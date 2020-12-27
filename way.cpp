#include <iostream>
#include<iomanip>

using namespace std;

int main(void){
	int s, t, v1, v2, v3, c1=0, c2=0, c3=0, a;
        cout << "Enter distance: " << endl;
        cin >> s;
        cout << "Enter time: " << endl;
        cin >> t;
        cout << "Enter taxi speed: " << endl;
        cin >> v1;
        cout << "Enter bus speed: "<< endl;
        cin >> v2;
        cout << "Enter walking speed: " << endl;
        cin >> v3;
        c1 = 2 * s;
        c2 = s;
        if (c1 * t >= s)
			cout << "You can take a taxi for" << c1 << "r"<< endl;
        if (v2*t>=s)
			cout << "You can take the bus for" << c2 << "r" << endl;
        if (v3 * t >= s)
			cout << "You can walk" << endl;
        if ((v1 * t >= s) && (v2 * t >= s) && (v3 * t >= s))
			cout << "Walk" << endl;
		if ((v1 * t >= s) && (v2 * t >= s))
			cout << "The cheapest by bus for" << c2 << "r" << endl;
        if (v1 * t >= s)
            cout << "The cheapest by taxi for" << c1 << "r";     
		cin >> a;
		return(0);
}
