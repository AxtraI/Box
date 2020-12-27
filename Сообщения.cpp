#include <iostream>
 
using namespace std;
 
int main() {
    char codes[4] = {'A','B','C','D'};
    int m = 0, n, k,a;
    cin>>n;
    k = n;
    while (k != 0) {
        k--;
        k >>= 2;
        m++;
    }
    char *ans = new char[m];
    int g = 0;
    while (n != 0) {
        n--;
        ans[g] = codes[n%4];
        g++;
        n >>= 2;
    }
    for (int i = m-1; i >= 0; i--)
        cout<<ans[i];
	cin >> a;
    return 0;
}