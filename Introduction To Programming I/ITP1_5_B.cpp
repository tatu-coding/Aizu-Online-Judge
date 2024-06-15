#include <iostream>

int main() {
    int h, w;

    while(true){
        std::cin >> h >> w;
        if (h == 0 && w == 0) {
            break;
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (i == 0 || i == h-1) {
                    std::cout << '#';
                } else if (i >= 1 && i <= h) {
                    if (j == 0 || j == w-1) {
                        std::cout << '#';
                    } else {
                        std::cout << '.';
                    }
                }
            }
            std::cout << std::endl;
        } 
        std::cout << std::endl;
    }
}


