class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftside = 0;
        
        for (int &item:nums)
            sum += item;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (leftside == sum - leftside - nums[i])
                return i;
            leftside += nums[i];
        }
        return -1;
    }
};

/*
================ Complexity Analysis====================

+ Time Complexity: O(N) with N is size of nums
+ Space Complexity: O(1) with space for leftside and sum

========================================================
*/
