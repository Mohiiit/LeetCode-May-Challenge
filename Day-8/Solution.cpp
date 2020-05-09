class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        //ios_base::sync_with_stdio(false);cin.tie(NULL);
        if(c.size()<3)
        {
            return true;
        }
        
        double m = ((c[0][1]-c[1][1])*1.0)/(c[0][0]-c[1][0]);
        
        for(int i =2; i<c.size(); i++)
        {
            double curr = ((c[i-1][1]-c[i][1])*1.0)/(c[i-1][0]-c[i][0]);
            if(curr!=m)
            {
                return false;
            }
        }
        return true;
        
    }
};
