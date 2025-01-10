#include <iostream>
#include <algorithm>

std::tuple<int, int> findMinMax(const int arr[], int size) {
    auto [min_iterator, max_iterator] = std::minmax_element(arr, arr+size);
    return {*min_iterator, *max_iterator};
}

int main(){
    int arr[] = {4,6,39,73,2,5,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    auto [min_value, max_value] = findMinMax(arr, size);

    std::cout <<"Minimum Value: "<< min_value <<std::endl;
    std::cout <<"Maimim Value: "<< max_value <<std::endl;

    return 0;

}