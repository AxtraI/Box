#include <iostream>

using namespace std;

int main(void){
	double xa, xb, xc, ya, yb, yc, xm, ym, v1, v2, v3, m1, m2, m3,a;
	cout << "Enter xa "<<endl;
	cin >> xa;
	cout << "Enter ya "<<endl;
	cin >> ya;
	cout << "Enter xb "<<endl;
	cin >> xb;
	cout << "Enter yb "<<endl;
	cin >> yb;
	cout << "Enter xc "<<endl;
	cin >> xc;
	cout << "Enter yc "<<endl;
	cin >> yc;
	cout << "Enter xm "<<endl;
	cin >> xm;
	cout << "Enter ym "<<endl;
	cin >> ym;
	v1 = (xa - xm) * (yb - ya) - (xb - xa) * (ya - ym);
	v2 = (xb - xm) * (yc - yb) - (xc - xb) * (yb - ym);
	v3 = (xc - xm) * (ya - yc) - (xa - xc) * (yc - ym);

	if(v1>=0)	m1=1;
	else	m1=0;

	if(v2>=0)	m2=1;
	else	m2=0;

	if(v3>=0) m3=1;
	else	m3=0;

	if(m1 == m2 && m2==m3)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	
	cin >> a;
	return 0;
}
