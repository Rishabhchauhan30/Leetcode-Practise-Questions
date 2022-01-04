class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        // creating a same set for both the arrays;
        unordered_set<int> unionSet;
        
        for(int i=0; i<n; i++)
            unionSet.insert(a[i]);
        
        for(int i=0; i<m; i++)
            unionSet.insert(b[i]);
            
        return unionSet.size();
        
    }
};