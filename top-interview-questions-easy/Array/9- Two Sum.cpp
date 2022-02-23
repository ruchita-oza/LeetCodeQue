class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> res;
        // for (int i =0 ; i < nums.size() ; i++)
        // {
        //     std::vector<int>::iterator it = std::find (nums.begin()+i, nums.end(), target-nums[i]);
        //     if(it-nums.begin()== 0)
        //         continue;
        //     res.push_back(i);
        //     res.push_back(it-nums.begin());
        //     break;
        // }
        // return res;
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
            std::cout<<nums[i]<<"\t"<<indices[nums[i]];
        }
        return {};
    }
};