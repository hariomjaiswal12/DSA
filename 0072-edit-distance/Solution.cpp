class Solution {
public:
    int f(string &a, string &b, int i, int j, vector<vector<int>>&dp){
        int ans = 0;

        if(i == a.length()){
            return b.length()-j;
        }

        if(j == b.length()){
            return a.length()-i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(a[i] == b[j]){
          dp[i][j] = 0 + f(a, b, i+1, j+1,dp);
        }
        else{
            //insert
            int insert = 1 + f(a, b, i, j+1,dp);
            
            int del = 1 + f(a, b, i+1 , j,dp);

            int replace = 1 + f(a, b, i+1, j+1,dp);

        dp[i][j] = min(replace , min(insert, del));
          
        }
        return dp[i][j];
    }

    int minDistance(string word1, string word2) {
        int n1 =word1.length();
        int n2 =word2.length();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
       return f(word1, word2, 0, 0,dp);
    }
};