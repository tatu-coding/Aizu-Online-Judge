#include <iostream>
using namespace std;

int main() {
    int n, x;

    while (true) {
        cin >> n >> x;

        if (n == 0 && x == 0) {
            break;
        }

        int l = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                for (int k = j + 1; k <= n; k++){
                    if (x == i + j + k) {
                        l++;
                    }
                }
            }
        }
        cout << l << endl;
    }
}