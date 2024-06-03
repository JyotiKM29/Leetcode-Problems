class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int n = nums.size();
        bool isAsc = nums[n-1] > nums[0] ;

        int start = 0;
        int end = n-1;

        // start case
        if(x < nums[0]) return 0;
        if( x > nums[end]) return n;
        
        while(start <= end){
           int middle = start + (end-start)/2;

           if(nums[middle] == x){
            return middle;
           }

           if(isAsc){
             if(nums[middle] < x){
                start = middle + 1;
             }else{
                end = middle - 1; 
             }
           }else{
             if(nums[middle] > x){
                start = middle + 1;
             }else{
                end = middle - 1; 
             }
           }

         
        }

        if(x > nums[end]){
            return start;
        }else{
            return end;
        }
          
    }
};