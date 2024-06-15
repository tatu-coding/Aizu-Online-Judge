#include <iostream>

int main() {
    int h, w;

    while (true) {
        std::cin >> h >> w;
        if (h == 0 && w == 0) {
            break;
        }

        for (int i = 0; h > i; i++) {        
            if ((i%2) == 1) {
                for (int j = 0; w > j; j++) {
                    if ((j%2) == 1) {
                        std::cout << '#';
                    } else {
                        std::cout << '.';
                    }
                }
                std::cout << std::endl;
            } else {
                for (int k = 0; w > k; k++) {
                    if ((k%2) == 1) {
                        std::cout << '.';
                    } else {
                        std::cout << '#';
                    }
                }
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;
    }
}