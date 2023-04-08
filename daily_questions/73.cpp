class Solution {
public:
    void mark(int i,int j,int m,int n,vector<vector<int>>& matrix)
    {
        for(int x=0;x<m;x++)
        {
            if(matrix[i][x]!=0)
            matrix[i][x]=INT_MIN;
        }
        for(int y=0;y<n;y++)
        {
            if(matrix[y][j]!=0)
            matrix[y][j]=INT_MIN;
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                mark(i,j,m,n,matrix);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==INT_MIN)
                matrix[i][j]=0;
            }
        }   
    }
};
