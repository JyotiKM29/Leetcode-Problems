class Solution {
public:
    
   
    vector<int> searchRange(vector<int>& nums, int target) {
        
       
	//Finding First Occurrence Of Target
        int start = 0,end = nums.size()-1;
        int mid,str = -1,last = -1;
        
        while(start <= end){
            mid = start + (end-start)/2;          
            
            if(nums[mid] == target){
                str = mid;                       //storing index if our target element is found
                end = mid-1;                     //condition for first occurence
            }
            
            else if(nums[mid] < target){
                start = mid+1;
            }
            else end = mid-1;
        }
		
        //Finding Last Occurence Of Target
        start = 0,end = nums.size()-1;
        last = -1;
        
        while(start <= end){
            mid = start + (end-start)/2;
            
            if(nums[mid] == target){
                last = mid;                    //storing index if our target element is found
                start = mid+1;                 //condition for last occurence
            }
            
            else if(nums[mid] < target){
                start = mid+1;
            }
            else end = mid-1;
        }
        
        return {str,last};               // return first and last index of element
        
    }
};