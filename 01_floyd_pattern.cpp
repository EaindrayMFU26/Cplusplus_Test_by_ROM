#include <iostream>

int main() {
    int num =1;
    for (int i=1; i<=4; i++){
        for (int j=1; j<=i; j++){
            std::cout << num << " ";
            num++;
        }
        std::cout << std::endl;
    }
    return 0;
}

//g++ 01_floyd_pattern.cpp
//./a.out