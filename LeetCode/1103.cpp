// question link: https://leetcode.com/problems/distribute-candies-to-people/


class Solution {
public:
    vector<int> distributeCandies(int candies, int ppl) {
        int i=0;
        vector<int> ans(ppl,0);
        
        while(candies>0){
            ans[i%ppl]+=i+1;
            candies-=i+1;
            i++;
        }
        if(candies<0){
            ans[(i-1)%ppl]-=abs(candies);
        }
        return ans;
    }
};