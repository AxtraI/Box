#include <iostream>
#include <math.h>

using namespace std;

double fact(int i){
	if (i == 0) return 1;
	if (i < 0) return 0;
	else return i * fact(i - 1);
}

int main(void) {
	setlocale(LC_ALL, "Russian");
	int  k = 1, l = 1, a;
	double i = 0.0, r = 0, E;
	scanf("%lf", &E);
	do{
		r += 1 / fact(i);
		i++;
	} 
	while (E - r>E);
	printf("r=%10.10lf, i=%d \n", r, i);
	double s3 = 0, inf;
	do {
		for (int k = l; k >= 1; k--){
			if ((k % 2) == 0) s3 = 1 / (2 + s3);
			else s3 = 1 / (k - s3);
		}
		if (fabs(E - (s3 + 1))<E) break;
		l++;
	} 
	while (l < i + 10);
	inf = 1 + s3;
	printf("inf=%10.10lf, l=%d \n", inf, l);
	if (l<i) printf("С заданной погрешностью E=%5.10lf, бесконечная дробь, с количеством итераций l=%d быстрее сходится к числу е, чем ряд, c количевством итераиций i=%d.\n", E, l, i);
	else printf("С заданной погрешностью E=%5.10lf, ряд, с количеством итераций i=%d быстрее сходится к числу е, чем бесконечная дробь, c количевством итераиций l=%d.\n", E, i, l);
	cin >> a;
	return 0;
}