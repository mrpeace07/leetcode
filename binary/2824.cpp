

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int result = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] < target) {
                    result++;
                }
            }
        }

        return result;
    }
};
