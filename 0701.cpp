#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        for(int i = 0; i < n-1; i++) {
            if(nums[i] == 0) {
                flag = i;
                while(flag < n && nums[flag] == 0) {
                    flag++;
                }
                if(flag < n) {
                    swap(nums[i], nums[flag]);
                }
            }
        }
    }
};
int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original array: ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    sol.moveZeroes(nums);

    cout << "After moveZeroes: ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}