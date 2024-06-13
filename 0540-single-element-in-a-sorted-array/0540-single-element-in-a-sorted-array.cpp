class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n = nums.size();
        if(n == 1)  return nums[0];
        for(int i = 0 ; i < n ; i++){
            if(nums[0] != nums[1]) return nums[0];
            else if(nums[n-1] != nums[n-2]) return nums[n-1];
            
            else{
                if(nums[i] != nums[i+1] && nums[i] !=nums[i-1]){
                    return nums[i];
                }
            }
        }
        
        return -1;
    }
};