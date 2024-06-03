#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int detA[n][m];
    int detB[n + 1][m + 1] = {};
    int i, j;

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++){
                cin >> detA[i][j];
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                detB[i][j] = detA[i][j];
            }
        }


        for (j = 0; j < m; j++) {
            for (i = 0; i < n; i++) {
                detB[n][j] += detB[i][j];
            }
        }

        for (i = 0; i <= n; i++) {
            for (j = 0; j < m; j++) {
                detB[i][m] += detB[i][j];
            }
        }

    
        for (i = 0; i < n + 1; i++) {
            for (j = 0; j < m + 1; j++) {
                if (j > 0) cout << " ";
                cout << detB[i][j];
            }
            cout << endl;
        }
}