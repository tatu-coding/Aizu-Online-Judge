#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    
    int counts[26] = {0};
    string str;

    getline(cin, str);

    for (int i = 0; i < str.size(); i++){
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            int num = ch - 'a';
            counts[num]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << " : " << counts[i] << endl; 
    }
}