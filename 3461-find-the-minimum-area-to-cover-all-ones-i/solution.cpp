class Solution {
public:
    int minimumArea(vector<vector<int>> grid) {


        int m = grid.size();
        int n = grid[0].size();

        int minX=n;
        int minY=m;
        int maxX=-1;
        int maxY=-1;
        


        for (int i=0 ; i < m; i++) {     // height
            for (int j=0 ; j < n; j++) { // width
                if (grid[i][j] == 1) {
                    minX = min(minX,j);
                    minY = min(minY,i);
                    maxX = max(maxX,j);
                    maxY = max(maxY,i);
                }
        }
        }
        int width = maxX-minX+1;
        int height = maxY-minY+1;
            
        return width * height;
    
}
};

