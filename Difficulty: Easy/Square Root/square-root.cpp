class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int start=1;
        int end=n;
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            long long square=(long long)mid*mid;
            if(square==n){
                return mid;
            }
            else if(square<n){
                start=mid+1;
                ans=mid;
                
            }
            else {
                end=mid-1;
            }
            }return ans;
            
        }
    
};