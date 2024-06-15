#include <iostream>

int main(){
    int i=0;

    while(true) {
        int x;
        std::cin >> x;

        if(x==0) break;

        i++;

        std::cout << "Case " << i << ": " << x << std::endl;
    }
}