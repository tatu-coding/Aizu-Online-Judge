#include <iostream>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;

    int detA[n][m];
    int detB[m][l];
    int detC[n][l];

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
                if (k > 0) {
                cout << " ";
                }
                detC[i][j] += detA[i][k]*detB[k][j];
            }
            cout << detC[i][j] << endl;
        }
    }
}