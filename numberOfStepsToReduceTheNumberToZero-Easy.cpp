/*
Given an integer num, return the number of steps to reduce it to zero.
In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num > 0){
            if(num % 2 == 0){
                num /= 2;
            }
            else{
                num -= 1;
            }
        steps++;
        }
    
        return steps;
    }
};



/*
#iteration:
    1. 14 / 2 = 7;
        num = 7;
    2. 7 - 1 = 6;
        num = 6;
    3. 6 / 2 = 3;
        num = 3;
    4. 3 - 1 = 2;
        num = 2;
    5. 2 / 2 = 1;
        num = 1;
    6. 1 - 1 = 0;
        num = 0;

*/
