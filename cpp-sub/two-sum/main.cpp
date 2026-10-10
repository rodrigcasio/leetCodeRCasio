#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

      // (1. input)
      // We are given an array of integers and a target value
      // - 1 - Initialize a hash table to store [c] values.
      // - 2 - Loop over each elements of the array.
      //    - a. Calculate the [c] value by subtracting the current element
      //         from the target to get our [c]
      //         [c] = i - target
      //    - b. If the [c] exists in the hash table.
      //        i. if exists, return the indecies of the current element and its complement
      //           from the hash table. [i index and c index]
      //        ii. If it does not exists, insert the current element [i] into the hash table
      //            so that we can check if we've already visted it.
      
      // (2. What ds/algo:)
      // We are going to use a hashTable, to store the complement value [c]
      
      // complement [c] (the second added value from the first array number)
      // i = initial value of the given array
      // [c] = i - target
      // i + c = target

      // (3. What are we gonna do with the data.)
      // We are going to iterate through our array, for each element, check if [c] value exists
      //  in the hash table. For if the [i] and the [c] add up to the target and exists,
      //  we have found a pair which sums up to the target.
      
      // 4.Output
      // We will return the two indices of the two elements that sum up to the target.
      
      //  - 3 - Return an empty array (edge cases)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
      // Step 1. input-given an array of integers and a target value
      unordered_map<int, int> hashTable;
      
      // What dsa to use: Hash Table
      
      for (int i = 0; i < nums.size(); i++) {
        int c = target - nums[i];

        if (hashTable.find(c) != hashTable.end()) {
    
          return {hashTable[c], i};
        } else {

          // insert the current element i into the hash table
          hashTable[nums[i]] = i;  
        }
      }

      // What to do with the data
      // - return the indices of the two elements
      return {};
      
      
    }
};

int main () {

  // test
  Solution sol;
  
  std::vector<int> nums = {3, 2, 4};
  int target = 6;

  std::vector<int> result = sol.twoSum(nums, target);

  std::cout << "[" << result[0] << ", " << result[1] << "]\n";

  return 0;
}





