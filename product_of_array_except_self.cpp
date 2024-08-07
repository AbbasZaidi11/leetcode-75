class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int pre=1;
        for(int i{0};i<n;i++){
            if(i==0){
                ans[i]=pre;
            }else{
                ans[i]=pre;
            }
            pre=pre*nums[i];
        }
        pre=1;
        for(int i{n-1};i>=0;i--){
            if(i==n-1){
                ans[i]=pre*ans[i];
            }else{
                ans[i]=pre*ans[i];
            }
            pre=pre*nums[i];
        }
        return ans;
    }
};
