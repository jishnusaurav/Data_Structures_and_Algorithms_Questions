class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = a.size();
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] >= target)
            return i;
    }
    return n;
    }
};
