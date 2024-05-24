#include <iostream>

int main() {
int n ;
std::cin >> n;

int a;
std::cin >> a;
int max = a;
int min = a;
long long sum = a;

    for (int i = 1; i < n; i++) {
        int a;
        std::cin >> a;

        if(a > max){
            max = a;
        } else if (min > a) {
            min = a;
        } 

        sum += a;
    }

    std::cout << min << " " << max << " " << sum << std::endl;
}