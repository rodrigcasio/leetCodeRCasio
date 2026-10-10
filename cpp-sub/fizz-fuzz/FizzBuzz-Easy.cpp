class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i = 1; i <= n; i++){
            bool divisibleBy3 = i % 3 == 0;
            bool divisibleBy5 = i % 5 == 0;

            if(divisibleBy3 && divisibleBy5){
                result.push_back("FizzBuzz");
            }
            else if(divisibleBy3){
                result.push_back("Fizz");
            }
            else if(divisibleBy5){
                result.push_back("Buzz");
            }
            else{
                result.push_back(to_string(i));
            }
        }
        return result; 
    }
};

/*

 Intuition

I was thinking of creating a vector type string, and save all the results in there, i was having a hard time trying to understand, How am i suppossed to turn i into a string, which you cant show integers and strings inside a vector declared string.
Approach

finding out the to_string(i) helped me a lot to understand how, and I also did it with the help of the "Learn" Courses on leet code. I'm still figuring out the proper syntax, transitioning from C syntax to C++ its been a challenge.. but this is what i got with some help from other users, and LeetCode course.
Code1 (with errors, first approach trying to do it)

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int len = strlen(fizzBuzz)+ 1; 
        string answer[len];
        result[0] = 1;
        for(int i = 1; i < n; i++){ 
            if(result[i] % 3 == 0 && result[i] % 5 == 0){
                fizzBuzz[i] = "Fizz";
            }
            else if(result[i] % 5 == 0){
                result[i] = "Buzz";
            }
            else if(result[i] % 3 == 0){
                fizzBuzz[i] = "FizzBuzz";
            }
            else if(result[i] % 3 != 0 || result[i] % 5 != 0){
                fizzBuzz[i]= to_string(result[i]);
            }

            return fizzBuzz[i];
        }
    }
};

Complexity

    Time complexity: O(n)

    Space complexity:O(1)

Code (correct one )

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i = 1; i <= n; i++){
            bool divisibleBy3 = i % 3 == 0;
            bool divisibleBy5 = i % 5 == 0;

            if(divisibleBy3 && divisibleBy5){
                result.push_back("FizzBuzz");
            }
            else if(divisibleBy3){
                result.push_back("Fizz");
            }
            else if(divisibleBy5){
                result.push_back("Buzz");
            }
            else{
                result.push_back(to_string(i));
            }
        }
        return result; 
    }
};


*/
