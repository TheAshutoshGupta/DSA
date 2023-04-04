int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,bool>mp;
        int sum=0;
        for(int i=0;i<jewels.size();i++)
        {
            mp[jewels[i]]=true;
        }
        int result=0;
        for(int i=0;i<stones.size();i++)
        {
            if(mp[stones[i]])
            sum+=1;

        }
        return sum;
        
        
        
    }
