class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vec.clear();
        for (i = 0; i < nums.size(); i++) {
            for (j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vec.push_back(i);
                    vec.push_back(j);
                    return vec;
                }
            }
        }
        return vec;
    }
private:
    vector<int> vec;
};
