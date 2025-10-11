#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int  n=nums.size();
       int ans=nums[0];
       int prev_sum=0;
       int cur_sum=0;
       for(int i=0;i<n;i++){
        cur_sum=prev_sum+nums[i];
        ans=max(ans,cur_sum);
        prev_sum=max(cur_sum,0);
       }
       return ans;
    }

};