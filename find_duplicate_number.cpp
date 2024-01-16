// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

//https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp1;
        int duplicate=0;
        for(auto i=0;i<nums.size();i++) 
        ++mp1[nums[i]];
        for(auto i:mp1){
            if(i.second>1){
                duplicate=i.first;
            }
        }
        return duplicate;
    }
};