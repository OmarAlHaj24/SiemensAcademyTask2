#include <iostream>
#include <vector>

int getSum(const std::vector <int>& vec){
    int sum = 0;

    for(int i = 0; i < (int)vec.size(); i++){
        sum += vec[i];
    }

    return sum;
}

double getAverage(const std::vector <int>& vec){
    double sum = 0;

    for(int i = 0; i < (int)vec.size(); i++){
        sum += vec[i];
    }

    return sum / vec.size();
}

int getMin(const std::vector <int>& vec){
    int min = vec[0];

    for(int i = 0; i < (int)vec.size(); i++){
        if(vec[i] < min){
            min = vec[i];
        }
    }

    return min;
}


int main()
{
    std::vector <int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << getSum(vec) << std::endl;
}
