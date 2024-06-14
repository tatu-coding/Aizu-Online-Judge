#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int num;

    while (cin >> num) {

        if (num == 0) {
            break;
        }

        int point[num];

        int sum = 0;

        for(int i = 0; i < num; i++) {
            cin >> point[i];
            sum += point[i];
        }

        double ave = static_cast<double>(sum) / num;

        double deviation_sum = 0;

        for(int i = 0; i < num; i++) {
            deviation_sum += pow(point[i] - ave, 2);
        }

        double standart_dev = sqrt(deviation_sum / num);

        cout << fixed << setprecision(8) << standart_dev << endl;
    }
}