//Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

//https://leetcode.com/problems/min-stack/
#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    vector< pair<int,int> > s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
            s.push_back({val,val});
        else
            s.push_back({val,min(s.back().second,val)});    
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s.back().first;
    }
    
    int getMin() {
        return s.back().second; 
    }
};