// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

//https://leetcode.com/problems/search-a-2d-matrix/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_num = matrix.size();
	int col_num = matrix[0].size();
	
	int begin = 0, end = row_num * col_num - 1;
	
	while(begin <= end){
		int mid = (begin + end) / 2;
		int mid_value = matrix[mid/col_num][mid%col_num];
		
		if( mid_value == target){
			return true;
		}else if(mid_value < target){
			begin = mid+1;
		}else{
			end = mid-1;
		}
	}
	
	return false;
    }
};