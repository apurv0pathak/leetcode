class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int> temp;
        for(int i = n-1; i >= n-k; i--)
        {
            temp.push_back(nums[i]);
        }
        for(int i = n-1; i >= k; i--)
        {
            nums[i] = nums[i-k];
        }
        for(int i = k-1; i >= 0; i--)
        {
            nums[k-1-i] = temp[i];
        }
    }
};