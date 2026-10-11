#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

      // input
      /*
        An array of int     
      */

      /*
        What DS/ algorithm:
        initialize a set.
          a. Check if the current value "nums[i]" is located in the unordered_set
            i. if the value is in the set. return true
            ii. if the value is not in the set, we store the current value of nums[i] in the set
          b. Place current value of nums[i]
      */

      // what to do with the data
      /*
        a. Check if the current value "nums[i]" is located in the unordered_set
          i. if the value is in the set. return true
          ii. if the value is not in the set, we store the current value of nums[i] in the set
        b. Place current value of nums[i]
        
      */
      // output:
      /*
        We return "true" if the current value apears in the current set
        
      */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      std::unordered_set<int> valuesSeen;
       
      for (const int& num : nums) {
        if (!valuesSeen.insert(num).second) {
          // if .second is true, it places num in the set, if(false)
          // if .second is false it returns true. it found num already in the set if(true)

          return true;
        }
      }

      return false;
    }
};

/*
  Aproach easier to read:

    bool containsDuplicate(vector<int>& nums) {
      std::unordered_set<int> valuesSeen;
      
      for (const int& num : nums) {
        if (valuesSeen.find(num) != valuesSeen.end()) {

          return true;
        }
        valuesSeen.insert(num);
      }
      return false;
    }
*/

/*
  we can also use within the condition 
  insert returns a pair: 
    i. .first is an iterator pointing to the element in the set
    ii. .second is a bool that says whether the insertion actually happened
      a set CANNOT hold duplicates

  if (!valuesSeen.insert(num).second) {
    return true;
  }
  
  return false;
*/

int main () {

  Solution sol;
  
  std::vector<int> nums = {1, 2, 3, 1};

  bool result = sol.containsDuplicate(nums);
  
  std::cout << "Result: "<< result << endl;
  
  return 0;
}
