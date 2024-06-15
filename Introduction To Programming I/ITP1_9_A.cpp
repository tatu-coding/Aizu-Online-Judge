#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string w, t;
    int count = 0;

    cin >> w;

    while (cin >> t) {
        if (t == "END_OF_TEXT") {
            break;
        }

    for (int i = 0; i < t.size(); i++) {
        t[i] = tolower(t[i]);
    }

    if (t == w) {
        count ++;
        } 
    }

    cout << count << endl;
}