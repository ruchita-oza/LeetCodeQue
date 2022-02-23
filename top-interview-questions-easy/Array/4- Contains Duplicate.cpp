class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int initial_size = nums.size();
        vector<int>::iterator ip;
        ip = std::unique(nums.begin(),nums.begin()+initial_size);
        nums.resize(std::distance(nums.begin(),ip));
        // cout<<nums.size();
        // for (ip = nums.begin(); ip != nums.end(); ++ip) {
        // cout << *ip << " ";
    
        return (nums.size()==initial_size ? false : true);
    }
};