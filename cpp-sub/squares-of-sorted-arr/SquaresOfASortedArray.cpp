class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector<int> nums2;
        for(int numbers : nums){
            int squares = numbers * numbers;
            nums2.push_back(squares);
        }
        std::sort(nums2.begin(), nums2.end());
        return nums2;
    }
};

/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Solved without using pointers, squares vector is sorted with the fucntion std::sort(nums2.begin(), nums2.end());

*/
