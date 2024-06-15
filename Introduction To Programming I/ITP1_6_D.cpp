#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int detA[n][m];
    int detB[m];
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> detA[i][j];   
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> detB[i];
    }

    for (int i = 0; i < n; i++) {
        int l = 0;
        for (int j = 0; j < m; j++){
            l += detA[i][j] * detB[j];
        }
        cout << l << endl;
    }
}