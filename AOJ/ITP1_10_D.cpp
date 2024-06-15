#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), y(n), z(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    for (int i = 0; i < n; i++) {
        z[i] = abs(x[i] - y[i]);
    }
    

    long long sum_before [5] = {0};
    double sum_after [5] = {0.0};

    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < n; j++) {
            sum_before [i] += pow(z[j], i);
        }
        sum_after [i] = pow(sum_before[i], 1.0 / i);
    }

    sum_after[4] = *max_element(z.begin(), z.end());

    for (int i = 1; i <= 4; i++) {
        cout << fixed << setprecision(8) << sum_after[i] << endl;
    }
}
