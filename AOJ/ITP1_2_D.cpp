#include <iostream>

int main(){
    int W, H, x, y, r;
    std::cin >> W >> H >> x >> y >> r;

    if (x-r >= 0 and W >= x+r and y-r >= 0 and H >= y+r){
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}