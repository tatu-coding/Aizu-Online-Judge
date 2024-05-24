#include <iostream>
#include <iomanip>

int main() {
    int x, y;

    std::cin >> x >> y;

    int f1 = x / y;
    int f2 = x % y;
    double f3 = static_cast<double>(x) / y;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << f1 << " " << f2 << " " << f3 << std::endl;
}