class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // cout<<"sorted";
        // for( auto a : nums)
        //     cout<<a<<" ";
        int size=nums.size();
        // cout<<nums[size-1];
        if(size<=3)
            return 0;
        int f3=nums[size-1]-nums[3];
        int f2l1=nums[size-2]-nums[2];
        int f1l2=nums[size-3]-nums[1];
        int l3=nums[size-4]-nums[0];
        if(f3<f2l1){
            return f3<f1l2 ? (f3<l3 ? f3 : l3) : f1l2<l3 ? f1l2 : l3;
        }
        else{
            return f2l1<f1l2 ? (f2l1<l3 ? f2l1 : l3) : f1l2<l3 ? f1l2 : l3;
        }
    }
};