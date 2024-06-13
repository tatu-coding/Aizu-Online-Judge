#include <iostream>
#include <string>
using namespace std;

int main() {
    while(true) {
        string str;
        cin >> str;

        if (str == "-") {
            break;
        }

        int m;
        cin >> m;
        
        for (int i = 0; i < m; i++) {
            int h;
            cin >> h;

            string before = str.substr(0, h);
            string after = str.substr(h);

            str = after + before;
        }

        cout << str << endl;
    }
}