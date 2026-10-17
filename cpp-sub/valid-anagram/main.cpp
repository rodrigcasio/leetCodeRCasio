#include <unordered_map>
#include <iostream>

      // input:  iterate through all the letters of string s
      
      // What DS/Algo to use
      // - Hash table 
      
      // what to do with the data:
      // - . Create a hashtable
      // - . declare an int named counter.
      // - . iterate throught the letters of {s}
      // - . place each letter of the {s} string into a hashtable
      // - . 
      // - . iterate through the letters of {t}
      // -  i. if letter {t}[i] is found in the hashtable, it continues.
      //    ii. if the letter is not found, we return false
      
      // output:
      // - Return bool value if {t} is an anagram of {s}

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
      std::unordered_map<char, int> seen;
      int counter = 0;

      for (const char& l : s) {
        seen[l] = 0;
      }

      for (const char& letterT : t) {
        counter++;

        if (seen.find(letterT) != seen.end()) {
          counter--;
        } else {
          counter--;
        }
      }

      if (counter == 0) {
        return true;
      }

      return false;
    }   
};


int main () {

  Solution sol;
  
  bool res = sol.isAnagram();
  std::cout << "result: " <<  res << std::endl;

  return 0;
}
