#include <iostream>

template <typename T>
T getMaxNum(T a,T b){
    return (a > b)? a : b;
}

int main() {
    int x=10, y=20;
    std::cout << "Maximum number of "<< x<< "and "<< y<< "is :"<< getMaxNum(x,y)<< std::endl;

    float a=3.14, b=3.14159;
    std::cout << "Maximum number of "<< a<< "and "<< b<< "is :"<< getMaxNum(a,b)<< std::endl;

    char c='A', d='B';
    std::cout << "Maximum number of "<< c<< "and "<< d<< "is :"<< getMaxNum(c,d)<< std::endl;

    std::string str1 = "Humble", str2 = "Foxy";
    std::cout << "Maximum of " << str1 << " and " << str2 << " is: " << getMaxNum(str1, str2) << std::endl;



}