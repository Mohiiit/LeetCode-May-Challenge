class Solution {
public:
    int findComplement(int n) {
        
        string tr = "";
        int flag = 0;
        for(int i =31; i>=0; i--)
        {
            if(n>>i & 1)
            {
                tr+="1";
                flag++;
            }
            else if(flag!=0)
            {
                tr+="0";
            }
        }
        string temp = "";
        for(int i =0; i<tr.size(); i++)
        {
            if(tr.substr(i,1)=="1")
            {
                temp+="0";
            }
            else
            {
                temp+="1";
            }
        }
        tr = temp;
        
        long long ans = 0;
        int num = 0;
        for(int i=tr.size()-1; i>=0; i--)
        {
            if(tr.substr(i,1)=="1")
            {
                int add = 1;
                for(int j=0; j<num; j++)
                {
                    add*=2;
                }
                ans+=add;
            }
            num++;
        }
        return ans;
    }
};
