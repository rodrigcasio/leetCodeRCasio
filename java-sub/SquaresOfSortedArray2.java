class Solution {
    public int[] sortedSquares(int[] nums) {
        
        int[] result = new int[nums.length];        //create the new array for result
        
        for(int i = 0; i < nums.length; i++){       //squaring the numbers of the array nums
            nums[i] = nums[i] * nums[i];
        }
        //creating  2 pointers
        int head = 0;
        int tail = nums.length - 1;
        // pos = last position of the array and decreases
        for(int pos = nums.length - 1; pos >= 0; pos--){       
            if(nums[head] > nums[tail]){
                result[pos] = nums[head];
                head++;         // moves head position to the right;
            }else{
                result[pos] = nums[tail];
                tail--;          // moves tail position to the left;
            }
        }
        return result;
    }
}

//DONE WITH POINTERS


/*
    setting up 2 pointers (head and tail)
    
    head will be initially positioned at index 0
    tail will be at last index of the nums.length - 1;
    
    the for loop "if" conditions will compare both values of each position of the squared array
    
*/
