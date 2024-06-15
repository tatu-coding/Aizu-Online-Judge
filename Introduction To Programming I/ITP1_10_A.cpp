#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    long double x1, y1, x2, y2;
    long double r;

    cin >> x1 >> y1 >> x2 >> y2;

    r = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << fixed;
    cout.precision(8);
    cout << r << endl;
}