// You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

//https://leetcode.com/problems/longest-repeating-character-replacement/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
        int characterReplacement(string s, int k) {
        int res = 0, maxf = 0;
        unordered_map<int, int> count;
        for (int i = 0; i < s.length(); ++i) {
            maxf = max(maxf, ++count[s[i]]);
            if (res - maxf < k)
                res++;
            else
                count[s[i - res]]--;
        }
        return res;
    }
};