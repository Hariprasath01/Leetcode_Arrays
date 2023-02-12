class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pow,safe;
        int count=0;
        vector<int>v;
         int z=nums.size();
        int res=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
               safe=i;
                continue;
            }
            res=res*nums[i];
        }
                if(count>1){
                 for(int i=0;i<n;i++){
                 v.push_back(0);
                 }
                 }
             
    for(int i=0;i<n;i++){
    if(nums[i]==0) {
         break;
    }
      else {
          if(count<2){
          pow=res/nums[i];
            v.push_back(pow);
    }
    }
    }
      
    if(count==1){
    v.erase(v.begin(), v.begin() +safe);
   for(int i=0;i<n-1;i++){
                if(nums[i]==0){
                    v.push_back(res);
                }
                 v.push_back(0);
            }
            if(nums[n-1]==0)
            v.push_back(res);
        }
                 return v;
    }  
};
