#include <iostream>

void call(int n) {
    int i = 1;

    while(i <= n){
        int x = i;
        bool found = false;

        if (x % 3 == 0) {
            std::cout << " " << i;
            found = true;
        }

        while (x && !found) {
            if (x % 10 == 3) {
                std::cout << " " << i;
                found = true;
            }  
            x /= 10;
        }
        i++;   
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    call(n);
}