//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

//https://leetcode.com/problems/valid-palindrome/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { 
        while (isalnum(s[i]) == false && i < j) i++; 
        while (isalnum(s[j]) == false && i < j) j--; 
        if (toupper(s[i]) != toupper(s[j])) return false; 
    }
    
    return true;
}
};
