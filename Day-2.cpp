int numJewelsInStones(string J, string S) {
        set<string>s;
        for(int i = 0; i<J.length(); i++)
        {
            s.insert(J.substr(i,1));
        }
        int ans = 0;
        for(int i = 0; i<S.length(); i++)
        {
            string curr = S.substr(i,1);
            if(s.find(curr)!=s.end())
            {
                ans++;
            }
        }
       return ans;
}
