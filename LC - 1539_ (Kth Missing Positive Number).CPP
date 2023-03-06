class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
 map<int,bool> map ;
    for(auto num:arr)
        map[num]=true;
    
    int c = 0 ;
    
    for(int i=1;i<INT_MAX;i++)
    {
        if(!map[i]) c++ ;
        if(c == k) return i ;
    }
    
    return 0 ;
    }
};
