#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cin >> number;

    int point1 = 0;
    int point2 = 0;

    for (int i = 0; i < number; i++) {
        string str1, str2;
        cin >> str1 >> str2;

        if (str1 == str2) {
            point1++;
            point2++;
        } else if (str1 > str2) {
            point1 += 3;
        } else {
            point2 += 3;
        }
    }
    cout << point1 << " " << point2 << endl; 
}