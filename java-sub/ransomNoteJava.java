class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        if(ransomNote.length() > magazine.length()) return false;
        int[] letters = new int[26]; //number of letters of the alphabet.

        for(char n : magazine.toCharArray())
            letters[n - 'a']++;
        for(char m : ransomNote.toCharArray()){
            letters[m - 'a']--;
            if(letters[m - 'a'] == -1)
                return false;
        }
        return true;
    }
}

/*
    1. initialize an array of alphabets counter 26 = number of letters in the alphabet
    2. loop through the string magazine, char n stores the char at index of magazine

    m - a = 
    109 - 97 = 12. #12 is the index of m. 

    a = 0
    b = 1
    c = 2
    d = 3
    e = 4
    f = 5
    g = 6
    h = 7
    i = 8
    j = 9
    k = 10
    l = 11
    m = 12
    n = 13
    o = 14
    p = 15
    q = 16
    r = 17
    s = 18
    t = 19
    u = 20
    v = 21
    w = 22
    x = 23
    y = 24
    z = 25 

*/
