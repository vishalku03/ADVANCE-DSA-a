#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxSubArray(vector<int> &nums)
     {
          int n = nums.size();
          int maxSum = INT_MIN;
          int sum = 0;

          for (int i = 0; i < n; i++)
          {
               sum = sum + nums[i];

               if (sum > maxSum)
                    maxSum = sum;

               if (sum < 0)
                    sum = 0;
          }
          return maxSum;
     }
};

// LEETCODE PROBLEM -  53