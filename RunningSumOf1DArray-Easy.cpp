class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        std::vector <int> result(nums.size());
        result[0] = nums[0]; 
        for(int i = 1; i < nums.size(); i++){
             result[i] = nums[i] + result[i - 1];   
        }
        return result;
    }
};  
/*
    -examples of for loop iteration process-

1.
    nums = {1, 2, 3, 4};
    result[] = {1, 3, 6, 10};

Iter#.
    1. result[1] = 2 + 1;
    2. result[2] = 3 + 3;
    3. result[3] = 4 + 6;

    
---------------------------------------
2.  
    nums = {2, 3, 5, 8, 13};
    result = {2, 5, 10, 18, 31};

    1. result[1] = 3 + 2;
    2. result[2] = 5 + 5;
    3. result[3] = 8 + 10;
    4. result[4] = 13 + 18;

  

- Intuition

From the start, I understood that I needed to make a some sort of loop, to evaluate and run through something... I'm new here and with a bit of experience in programming C and C++. And looking at the code, I came a across many syntax errors without knowing how to implement my answer accordingly.

I hope my notes below help new programmers that start at leetcode find them helpful.. I dont know..

- Approach

I was honestly having a hard time solving it, I used the learn section to help me get though it and understanding the logic...

- Complexity

    Time complexity: O(n)

    Space complexity: O(1)

Code

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        std::vector <int> result(nums.size());
        result[0] = nums[0]; 
        for(int i = 1; i < nums.size(); i++){
             result[i] = nums[i] + result[i - 1];   
        }
        return result;
    }
};  
/*
    -examples of for loop iteration process-

1.
    nums = {1, 2, 3, 4};
    result[] = {1, 3, 6, 10};

Iter#.
    1. result[1] = 2 + 1;
    2. result[2] = 3 + 3;
    3. result[3] = 4 + 6;

    
---------------------------------------
2.  
    nums = {2, 3, 5, 8, 13};
    result = {2, 5, 10, 18, 31};

    1. result[1] = 3 + 2;
    2. result[2] = 5 + 5;
    3. result[3] = 8 + 10;
    4. result[4] = 13 + 18;

*/

    
*/
