class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int currMax = 0;
        int maxSoFar = 0;
        int size = nums.size();
        
        for(int i=0; i<size; i++)  {
            if(nums[i] == 1)
                currMax++; 
            else {
                if(currMax > maxSoFar) 
                    maxSoFar = currMax;
                currMax = 0;
            }
        }
        return maxSoFar;
    }
};