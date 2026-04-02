class Solution {
public:

    void reverseVector(vector<int> & matrix){
        int n = matrix.size();
        int start = 0;
        int end = n-1;

        // reverse
        while(start <= end){
            swap(matrix[start],matrix[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // transpose of matrix
        for(int i=0; i<matrix.size(); i++){
            for(int j=i; j<matrix[i].size(); j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // reverse row
        for(int i=0; i<n; i++){
            reverseVector(matrix[i]);
        }
    }
};