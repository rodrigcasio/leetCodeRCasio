class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] nums2 = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            int square = nums[i] * nums[i];
                nums2[i] = square;
        }
        Arrays.sort(nums2);
        return nums2;
        
    }
}

/*

Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.


    Easy version without pointers
    using the function Arrays.sort() tor organized in non decresead order..

*/
