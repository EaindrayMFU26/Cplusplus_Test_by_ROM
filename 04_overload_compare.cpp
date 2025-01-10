#include <iostream>

bool areEqual(const int& a, const int& b) {
    return a == b;
}

bool areEqual(const float& a, const float& b) {
    return a == b;
}

// bool areEqual(const float a, const float b) {
//     return a == b;
// }

int main() {
    int int1, int2;
    float float1, float2;

    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;

    std::cout << "Enter two floats: ";
    std::cin >> float1 >> float2;

    std::cout << "Comparing integers:" << std::endl;
    std::string int_result = (areEqual(int1,int2))? "true" :"false";
    std::cout << int1 << " and "<< int2 << " : "<< int_result << std::endl;
    //std::cout << int1 << " and " << int2 << ": "  << areEqual(int1, int2) << std::endl;

    std::cout << "Comparing floats:" << std::endl;
    std::string float_result = (areEqual(float1,float2))? "true" :"false";
    std::cout << float1 << " and "<< float2 << " : "<< float_result << std::endl;
    //std::cout << float1 << " and " << float2 << ": " << areEqual(float1, float2) << std::endl;

    return 0;
}