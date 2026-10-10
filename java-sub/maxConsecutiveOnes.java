class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count1 = 0; 
        int count2 = 0; //keep count of the amount of times we see 1 in row.
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 1){
                count1++;
                if(count1 > count2){
                    count2++;
                }
            }else{
                count1 = 0;
            }
        }
        return count2;
    }
}
