#include <iostream>

int main() {
    int a, b, c;
    int y = 0;

    std::cin >> a >> b >> c;

    for (int x = a; x <= b; x++) {
        if ((c%x) == 0) {
            y++;
        }
    }
    std::cout << y << std::endl;
}