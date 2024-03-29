class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0 ; i<n ; i++){
            for(int j = i ; j<n ; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for(int i = 0; i<n ; i++){
            int f = 0, r = n-1;
            while(f<r){
                swap(matrix[i][f],matrix[i][r]);
                f++;
                r--;
            }
        }
    }
};
