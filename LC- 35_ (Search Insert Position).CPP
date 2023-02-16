class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int ret;
        int i=0;
       auto  fin= find(nums.begin(),nums.end(),target);
       if(fin!= nums.end())
    {
        int index = fin - nums.begin();
        return index;
    }
        else {
            while(n){
             if(nums[i]<target){
                     i++;
                     n--;
             }
             else{
                 ret=i;
                 break;
             }
            }
        }
        return ret;
    }
};
