#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string p;
    string q;

    cin >> s >> p;

    while (q.size() < 100) {
        q += s;
    }
        q += s;

    if (q.find(p) == string::npos) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    } 
}