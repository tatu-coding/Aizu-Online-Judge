#include <iostream>

int main() {
int x, y;
char op;

while(true) {
    std::cin >> x >> op >> y;
        if (op == '+') {
            std::cout << x + y << std::endl;
        } 

        if (op == '-') {
            std::cout << x - y << std::endl;
        } 

        if (op == '*') {
            std::cout << x * y << std::endl;
        } 

        if (op == '/') {
            std::cout << x / y << std::endl;
        } 
        
        if (op == '?') {
            break;
        }
    }
}