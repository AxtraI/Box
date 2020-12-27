#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	int mass[3],a;
	cout << "Enter 3 integers ";
	cin >> mass[0] >> mass[1] >> mass[2];
	cout << endl;
	for (int i=0; i<3; i++)
		{
			for (int j=0; j<3; j++)
			{
				if(((mass[i] % mass[j]) == 0) && (i!=j))
				{
					cout << mass[i] << ":" << mass[j] << "=0/n";
				}
			}
		}
	cin >> a;
	return 0;
}