class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      map<int,int>m;
      int k;
      for(auto x:nums){
          m[x]++;
      }  
      for(auto x:m){
          if(x.second==1){
              k= x.first;
          }
      }
return k;
    }
};
