#include <iostream>
#include <iomanip>

int main() {
    double r;
    double pi = 3.141592653589;

    std::cin >> r;

    double f1 = r * r * pi;
    double f2 = 2 * r * pi;

    std::cout << std::fixed << std::setprecision(6);
    std::cout << f1 << " " << f2 << std::endl;
}