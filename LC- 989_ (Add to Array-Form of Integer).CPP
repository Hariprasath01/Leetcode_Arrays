class Solution {
public:
 vector<int> addToArrayForm(vector<int>& num, int k) {

        for(int i=num.size()-1;i>=0;i--){
            int tot = num[i]+k; 
            num[i] = tot%10;
            k=tot/10; 
        }
             while(k>0){
            num.insert(num.begin(),k%10);
            k=k/10;
        }

        return num;


    }
};
