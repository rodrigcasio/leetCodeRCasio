#include <iostream>
#include <vector>

class Solution{
  public:

  void duplicateZero(std::vector<int>& arr){
    int numOfZeros = 0;
    int n = arr.size();

    for(const int& num : arr){
      // counting the number of zeros in the array
      if(num == 0) numOfZeros++;
    }
    
    int newLength = n + numOfZeros;
    for(int i = n - 1, j = newLength - 1; n >= 0, j >= 0; i--, j--){
      if(arr[i] == 0){
        // placing two zeros if within bounds
        if(j < n) arr[j] = 0;
        j--;
        if(j < n) arr[j] = 0;
      }else{
        // placing the element that isn't zero
        if(j < n) arr[j] = arr[i];
      }
    }
};

int main(){

  std::vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
  duplicateZeros(arr);
  for(const int& num : arr){
    std::cout << "- " << num << std::endl;
  }
  
  return 0;
}


// Modify the arrray in-place (meaning no extra array)
// Fixed array length (no rezising)
// When 0 is found, duplicate it by inserting another 0 and shifting elements right 
// Ignore elements that exceed the arrays length after shifting.



// Two pass solution:

// 1. Count how many zeros are in the array.
//    Set up a new length

// 2. Fill the array from right to left, duplicating zeros
//    and shifting elements correclty.


