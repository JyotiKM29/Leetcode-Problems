class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 ;
        int high = nums.size() - 1;

        while(low < high){
            int mid = low + (high - low)/2;
 
            //right is sorted
            if(nums[mid] < nums[high]){
               high = mid ;
            }else{
                low = mid + 1;
            }
        } 

        return nums[low];
    }

    
};