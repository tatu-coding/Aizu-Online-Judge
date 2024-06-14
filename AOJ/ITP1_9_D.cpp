#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str1;
    cin >> str1;

    int number;
    cin >> number;

    for (int i = 0; i < number; i++) {
        string order;
        cin >> order;

        int n1, n2;
        cin >> n1 >> n2;

        if (order == "print") {
            cout << str1.substr(n1, n2 - n1 + 1) << endl;
        } else if (order == "replace") {
            string str2;
            cin >> str2;

            str1.replace(n1, n2 - n1 + 1, str2);
        } else if (order == "reverse") {
            reverse(str1.begin() + n1, str1.begin() + n2 + 1);
        }
    }
}