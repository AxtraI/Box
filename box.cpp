#include <iostream>

using namespace std;

int main(void){
    int l, w, h, l1, w1, h1, a;
    cout << "enter box size:" <<endl;
    cout << "length ";
    cin >> l;
    cout << "width ";
    cin >> w;
    cout << "height ";
    cin >> h;
    cout << "enter the size of the parcel:" << endl;
    cout << "length ";
    cin >> l1;
    cout << "width ";
    cin >> w1;
    cout << "height ";
    cin >> h1;
    if (
        (l < l1 && w < w1 && h < h1) ||
        (l < l1 && w < h1 && h < w1) ||
        (l < w1 && w < l1 && h < h1) ||
        (l < w1 && w < h1 && h < l1) ||
        (l < h1 && w < w1 && h < l1) ||
        (l < h1 && w < l1 && h < w1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
	cin >> a;
    return 0;
}