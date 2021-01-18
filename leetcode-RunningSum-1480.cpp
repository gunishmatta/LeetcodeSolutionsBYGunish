class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
  
        for(int i=1;i<nums.size();i++)
        {
            int curr = nums[i];
            nums[i] = nums[i-1]+curr;
        }
        
     return nums;   
    }
};
