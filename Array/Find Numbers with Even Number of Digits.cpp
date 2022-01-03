class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        for(int i=0; i<size; i++) {
            int check = log10(nums[i]);
            if(check%2 == 1) count++;
        }
        return count;
    }
};