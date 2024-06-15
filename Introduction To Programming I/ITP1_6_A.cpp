#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int number[n];

    for (int i = 0; i < n; i++){
        std::cin >> number[i];
    }

    for (int i = n-1; i >= 0; i--) {
        std::cout << number[i];
        if (i > 0) {
            std::cout << " ";
        }    
    }
    std::cout << std::endl;
}