// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.


//https://leetcode.com/problems/valid-sudoku/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
//9 rows hai 9 colums and 9 boxes which each store 3X3
        vector<set<int>> rows(9),cols(9),blocks(9); 
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                //if board[i][j] entry is '.' then we just continue as we only care about the duplicate values
                if(board[i][j] == '.'){
                    continue;
                }
                int curr = board[i][j]; //current index
                //for block try this formula using pen and paper you will get it..
                if(rows[i].count(curr) || cols[j].count(curr) ||
                  blocks[(i/3)*3 + j/3].count(curr)){
                    return false; //we return false because the value currently we have is already present in set
                }
                //if we don't found the value then after that we must enter this value in our set
                rows[i].insert(curr);
                cols[j].insert(curr);
                blocks[(i/3*3) + j/3].insert(curr);
            }
        }
        return true; //after loop finishes our control reaches here that means our sudoko is valid...
    }
};