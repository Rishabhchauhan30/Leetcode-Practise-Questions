class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int size = nums.size();
        int low = size - k;
        vector<int> temp;
        
        if ((size == 0) || (k <= 0))
            return;
        
        for(int i=low; i<size; i++) 
            temp.push_back(nums[i]);
        
        for(int i=low-1; i>=0; i--) 
            nums[i+k] = nums[i];
        
        for(int i=0; i<k; i++) 
            nums[i] = temp[i];
    }
};