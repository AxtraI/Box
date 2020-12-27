#include <iostream>

using namespace std;

int main(void){
	int o, t, th, o1, o2, a; 
	cout << "Enter brick length: ";
	cin >> o;
	cout << "Enter the width of the brick: ";
	cin >> t;
	cout << "Enter brick height: ";
	cin >> th;
	cout << "Enter hole dimensions 1: ";
	cin >> o1;
	cout << "Enter hole dimensions 2: ";
	cin >> o2;
	if (((o <= o1) && (t <= 02)) || ((o <= 02) && (t <= o1)))
		cout << "Yes" << endl;
	else if	(((o <= o1) && (th <= o2)) || ((o <= o2) && (th <= o1))) 
		cout << "Yes" << endl;
	else if (((t <= o1) && (th <= o2)) || ((t <= o2) && (th <= o1)))
	cout << "Yes" << endl;
	else cout << "No" << endl;
	cin >> a;
	return (0);
}
