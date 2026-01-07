class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        int flag = 0, k = 0;
        for(int i = 0; i<n-1; i++)
        {
            if(nums[i] == 0)
            {
                flag = i;
                while(nums[flag] == 0 && flag < n-1)
                {
                    flag++;
                }
                
                swap(nums[i], nums[flag]);
            }
        }
    }
};