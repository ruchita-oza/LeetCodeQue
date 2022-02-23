class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        // for (int i =0 ; i <n ; i++){
        //     cout<<str[i]<<endl;
        // }
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
                // cout<<a[i]<<" "<<b[i]<<endl;
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};