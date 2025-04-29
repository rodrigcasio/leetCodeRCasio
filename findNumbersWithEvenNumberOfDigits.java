class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        int count2 = 0; //count the number of times the amount of numbers % 2 = 0;
        
        for(int i = 0; i < nums.length; i++){
            while(nums[i] >= 1){
                nums[i] /= 10;
                count++;
            }
                if(count % 2 == 0){
                    count2++;
                }
        count = 0; //restart the count value after each iteration of for loop.
        }
        return count2;
    }
}
