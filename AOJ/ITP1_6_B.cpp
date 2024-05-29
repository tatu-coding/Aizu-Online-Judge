#include <iostream>
using namespace std;

int main() {
    int tramp[4][13] = {0};

    int n;

    int i, k;

    char j;

    int l, m;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> j >> k;

        if (j == 'S') {
            tramp[0][k-1] = 1;
        } else if (j == 'H') {
            tramp[1][k-1] = 1;
        } else if (j == 'C') {
            tramp[2][k-1] = 1;
        } else if (j == 'D') {
            tramp[3][k-1] = 1;
        }
    }

    for(l = 0; l < 4; l++) {   
        for(m = 0; m <= 12; m++){
            if(tramp[l][m] != 1) {
                if(l == 0) {
                    cout << "S " << m+1 << endl;
                } else if (l == 1) {
                    cout << "H " << m+1 << endl;
                } else if (l == 2) {
                    cout << "C " << m+1 << endl;
                } else if (l == 3) {
                    cout << "D " << m+1 << endl;
                }
            }
        }
    }
    
    return 0;
}