class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   map<int,int>m;
   int n=0;
   for(auto x:nums){
       m[x];
   }
   nums.erase(nums.begin(),nums.end());
   for(auto x:m){
       nums.push_back(x.first);
       n++;
   }
return n;
    }

};
