class Solution {
  public:
  bool isPossible(vector<int>& arr, int k,int n,int mid){
      int paintercount=1;
      int timesum=0;
      for(int i=0;i<n;i++){
          if(timesum+arr[i]<=mid){
              timesum+=arr[i];
          }
          else{
              paintercount++;
              if(paintercount>k||arr[i]>mid){
                  return false;
              }
              timesum=arr[i];
          }
      }return true;
  }
    int minTime(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        if(k>n){
            return -1;
        }
        int s=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
        }
        int e=sum;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isPossible(arr,k,n,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
                
            }
            
        }return ans;
    }
};