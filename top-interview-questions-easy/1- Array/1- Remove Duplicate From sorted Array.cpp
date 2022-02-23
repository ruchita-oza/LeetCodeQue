class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count;
        int size = nums.size();        
        vector<int>::iterator ip;
        
        ip=std::unique(nums.begin(),nums.begin()+size);
        nums.resize(std::distance(nums.begin(),ip));
        
        return nums.size();

    }
};