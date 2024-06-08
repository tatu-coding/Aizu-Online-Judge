#include <iostream>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    long long detA[n][m] = {};
    long long detB[m][l] = {};
    long long detC[n][l] = {};

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> detA[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < l; j++){
            cin >> detB[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            for (int k = 0; k < m; k++){
                detC[i][j] += detA[i][k]*detB[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            if (j > 0) {
                cout << " ";
            }
            cout << detC[i][j];
        }
        cout << endl;
    }
}