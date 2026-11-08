#include <cstddef>
#include <unordered_map>
#include <iostream>

      // input:  two strings {s} and {t}.
      
      // What DS/Algo to use
      // - Hash table 
      
      // what to do with the data:
      // - . Create a hash table
      //
      // - . Evaluate if both strings are equal size.
      //    i. if they are not equal we return false
      //    ii. if they are equal we move on.
      //
      // - . iterate throught the letters of {s} string
      // - . place each letter of the {s} string into a hashtable
      // - . add 1 to the value of each key(letter) for this hash table
      //
      //
      // - . iterate throught the letters of {t} string
      // - . subtract 1 to the value of each key(letter) in the hash table 
      // - . evaluate if the value of the key is less than zero.
      //      i. if any value from any key is less than 0, that would not be a anagram
      // - . Here we are explicitely subtracting every the value of each key.
      //
      // output:
      // - Return bool value if {t} is an anagram of {s}
// aproach with no hashtables and only one array
// input : 2 strings 
//  1. intizialize an array with 26 slots, setting all of them to 0
//  2. check if both strings have the same number of characters.
//  3. setting up the index number with ('a' = 97) - ('letter' = n). and add 1 into that index slot.
//  4. iterate through the {t} string, and subtract the value placed in the index counts['letter'] = 1;
//     - Evaluate if subtracting the value of the slot with 1 is less than 0 return false
//     - If it is 0 continues the loop to evaluate each result of the value holding the index [letter - 'a']

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
      
      int counts[26] = {};
      
      if (s.length() != t.length()) return false;

      for (const char& letS : s) {
        counts[letS - 'a'] += 1;  // e.j. 'b'(98 value) - 'a'(97) = 1. 1 is the index
      }
      for (const char& letT : t) {
        counts[letT - 'a'] -= 1;
        if (counts[letT - 'a'] < 0) return false;
      }

      return true;  
    }
};

int main () {

  Solution sol;
  std::string a = "hello";
  std::string b = "ehllo";

  bool res = sol.isAnagram(a, b);
  std::cout << "result: " <<  res << std::endl;

  return 0;
}



// // submission 3
// class Solution {
// public:
//     bool isAnagram(std::string s, std::string t) {
//       std::unordered_map<char, int> seenS;
//
//       if (s.length() != t.length()) return false;
//
//       for (const char& letS : s) {
//         seenS[letS] += 1;
//       }
//
//       for (const char& letT : t) {
//         seenS[letT] -= 1;
//         if (seenS.at(letT) < 0) return false;
//       }
//
//       return true;
//     }   
// };
//


/*
 *
// class Solution {
// public:
//     bool isAnagram(std::string s, std::string t) {
//       std::unordered_map<char, int> seenS;
//       std::unordered_map<char, int> seenT;
//
//       if (s.length() != t.length()) return false;
//
//       for (std::size_t i = 0; i < seenS.size(); i++) {
//         seenS[i] = 0;
//
//         for (std::size_t j = 0; j < seenT.size(); j++) {
//           if (s[i] != t[j]) return false;
//
//           seenT[j] += 1;
//         }
//
//         seenS[i] += 1;
//       }
//
//       // for (const auto& w : seenS) {
//       //   for (const auto& m : seenT) {
//       //     if (w.second != m.second) return false;
//       //   }
//       // }
//
//       // for (size_t w = 0; w < s.size(); w++) {
//       //   for (size_t g = 0; g < t.size(); g++) { 
//       //     if (seenS[w] != seenT[w]) {
//       //       return false;
//       //     }
//       //   }
//       // }
//
//       return true;
//     }
//
// };
 *
 *
      std::unordered_map<char, int> seenS;
      std::unordered_map<char, int> seenT;
      int counter = 0;

      for (const char& l : s) {
        seenS[l] += 1;
      }

      for (const char& letterT : t) {
        seenT[letterT] += 1;
      }

      for (const char& lr : s) {
        if (seenS.find(lr) != seenS.end()) {

          if (seenS[lr] != seenT[lr]) {
           return false; 
          }

        }
      }

      return true;
    }   
*/
