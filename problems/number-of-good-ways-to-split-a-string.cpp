class Solution {
public:
    int numSplits(string s) {
        vector<int>sl(26,0),sr(26,0);
        int des_l=0 , des_r=0;
        int ans=0;
        for(char c : s)
        {
            sl[c-'a']++;
            if(sl[c-'a']==1)
                des_l++;
        }
        for(char c : s)
        {
            sr[c-'a']++;//ek left mese right me dala
            if(sr[c-'a']==1)
                des_r++;
            sl[c-'a']--;
            if(sl[c-'a']==0)
                des_l--;
            if(des_l==des_r)
                ans++;
        }
        return ans;
    }
};