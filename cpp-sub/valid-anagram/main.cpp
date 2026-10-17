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
      //
      // - . Iterate through the {s} string 
      // - . evaluate the value in the hashtable at the key 
      //     of the current [l] (letter of {s})
      //      i. if the value does not correspond to 0 of the current key
      //         in the hash table, we return false.
      
      // output:
      // - Return bool value if {t} is an anagram of {s}

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
      std::unordered_map<char, int> seenS;

      if (s.length() != t.length()) return false;

      for (const char& letS : s) {
        seenS[letS] += 1;
      }

      for (const char& letT : t) {
        seenS[letT] -= 1;
      }
      
      for (const char& l : s) {
        if (seenS.at(l) != 0) return false;
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
