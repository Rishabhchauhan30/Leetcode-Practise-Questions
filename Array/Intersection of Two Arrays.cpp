class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        // creating a set of any vector;
        
        set<int> unique(nums1.begin(), nums1.end());
        vector<int> resultedVect;
        
        for(int x : nums2)
            if(unique.erase(x))
                resultedVect.push_back(x);
        
        return resultedVect;
        
    }
};