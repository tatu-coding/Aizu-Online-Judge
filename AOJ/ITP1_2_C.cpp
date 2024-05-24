#include <iostream>

int main() {
    int a, b, c;
    int max, center, min;
    std::cin >> a >> b >> c;

    if (a > b && a > c) {
        max = a; 
        if (b > c) {
            center = b;
            min = c;
        } else {
            center = c;
            min = b;
        }
    } else if (b > a && b > c) {
        max = b;
        if (a > c) {
            center = a;
            min = c;
        } else {
            center = c;
            min = a;
        }
    } else {
        max = c;
        if (a > b) {
            center = a;
            min = b;
        } else {
            center = b;
            min = a;
        }
    } 
    std::cout << min << " " << center << " " << max << std::endl;
}