#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
	int h, m, s, a;
	cout << "Enter hour: ";
	cin >> h;
	cout << "Enter minutes: ";
	cin >> m;
	cout << "Enter seconds: ";
	cin >> s;

	cout << setfill('0');
	cout << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << s << endl;

	cout << "I\n";
	m = s < 30 ? m : (m + 1);
	m = m > 59 ? 0, h++ : m;
	cout << setw(2) << h << ":" << setw(2) << m << endl;

	cout << "II\n";
	h = (m < 30) ? h : h + 1;
	cout << setw(2) << h << endl;

	cin >> a; 
	return 0;
}
