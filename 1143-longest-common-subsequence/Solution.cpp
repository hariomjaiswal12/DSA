class Solution {
public:

    int f(string &text1, string &text2, int i, int j, vector<vector<int>>&dp){
        int ans = 0;
        if(i >= text1.size()) return 0;

        if(j >= text2.size()) return 0;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(text1[i] == text2[j]){
             ans = 1+f(text1, text2, i+1, j+1,dp);
        }

        else{
            ans = 0+max(f(text1, text2, i+1, j,dp), f(text1, text2, i, j+1,dp));
        }
        dp[i][j] =ans;
        return dp[i][j];
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n1 =text1.size();
        int n2 =text2.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
       return f(text1, text2, 0, 0,dp);
    }
};