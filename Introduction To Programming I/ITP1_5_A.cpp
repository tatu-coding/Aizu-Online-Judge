#include <iostream>

int main() {
    int h, w;

    while(true) {
        std::cin >> h >> w;
        if (h == 0 && w == 0) {
            break;
        }
        for(int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                std::cout << "#";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}