class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int temp[n+1];
        for(int i = 0; i < n; i++){
            temp[nums[i]] = 1;
        }
        int i = 0;
        while(temp[i] == 1)
        {
            i++;
        }
        return i;
    }
};