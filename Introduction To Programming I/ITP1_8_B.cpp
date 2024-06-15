#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    while (true) {
        cin >> str;
        if (str == "0") {
            break;
        }

        int sum = 0;
        for (int i = 0; i < str.size(); i++) {
            sum += str[i] - '0';
        }

        cout << sum << endl;
    }
}