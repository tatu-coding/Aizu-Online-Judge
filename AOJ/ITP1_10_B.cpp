#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int a, b, theta;
    cin >> a >> b >> theta;

    double theta_degrees = theta * M_PI / 180.0;
    double sine_value = sin(theta_degrees);
    double cosine_value = cos(theta_degrees);

    double s = 0.5 * a * b * sine_value;
    double c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cosine_value);
    double h = 2 * s / a;

    cout << fixed << setprecision(8) << s << endl;
    cout << fixed << setprecision(8) << a + b + c << endl;
    cout << fixed << setprecision(8) << h << endl;
}
