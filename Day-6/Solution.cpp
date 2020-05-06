class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        map<int,int> m;
        int count = 0;
        int ans = 0;
        for(int i =0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>count)
            {
                count = m[nums[i]];
                ans = nums[i];
                if(count>(nums.size()/2))
                {
                    return ans;
                }
            }
        }
    }
};
