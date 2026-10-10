#include <iostream>

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main(){

    Solution obj1;
    
    int result = obj1.sum(3, 4);
    std::cout << result << std::endl;
    return 0;
}

