class Solution {
public:
   
   //void markrow(vector<vector<int>>& matrix,int i,int marker){
    /*int n=matrix.size();
    int m=matrix[0].size();
        for(int j=0;j<m;j++){
            if(matrix[i][j]!=0){
                matrix[i][j]=marker;
            }
        }
    }
     void markcol(vector<vector<int>>& matrix,int j,int marker){
        int n=matrix.size();
        int m=matrix[0].size();
   
        for(int i=0;i<n;i++){
            if(matrix[i][j]!=0){
                matrix[i][j]=marker;
            }
        }
    }*/

   
    void setZeroes(vector<vector<int>>& matrix) {
        /*int n=matrix.size();
        int m=matrix[0].size();
        vector<int>row(n,0);
        vector<int>col(m,0);
        
        //int marker=1e9+7;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                  row[i]=1;
                  col[j]=1;
                }
          
            }
        }
              for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              if(row[i]==1||col[j]==1){
              matrix[i][j]=0;
                }
            }
              }*/
              int m=matrix.size();
              int n=matrix[0].size();
              bool firstRowZero=false;
              bool firstColZero=false;
              
            
                for(int j=0;j<n;j++){
                    if(matrix[0][j]==0){
                    firstRowZero=true;
                    break;
                }
                }
              
              for(int i=0;i<m;i++){
                if(matrix[i][0]==0){
                firstColZero=true;
                break;
              }
              }
              //first mark col and row to zero
              for(int i=1;i<m;i++){
                for(int j=1;j<n;j++){
                    if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
              }
              }
              //using that make entire row column zero
              for(int i=1;i<m;i++){
                for(int j=1;j<n;j++){
                    if(matrix[0][j]==0||matrix[i][0]==0){
                        matrix[i][j]=0;
                    }
                }
              }
              if(firstRowZero){
                for(int j=0;j<n;j++){
                    matrix[0][j]=0;
                }
              }
              if(firstColZero){
                for(int i=0;i<m;i++){
                    matrix[i][0]=0;
                }
              }



}
};
