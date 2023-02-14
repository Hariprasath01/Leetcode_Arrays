class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m= nums2.size();
        int f=n+m;
        int c,d;
        int odd;
        double fin;
        for(int j=0;j<m;j++){
        nums1.push_back(nums2[j]);
               }
        sort(nums1.begin(),nums1.end());
        if(f%2!=0){
           odd= f/2;
           return nums1[odd];
        }
        else{
            d=f/2;
            c = d-1;
        }
        fin=(nums1[d]+nums1[c])/2.0;
     return (double)fin; 
    }
  
};
