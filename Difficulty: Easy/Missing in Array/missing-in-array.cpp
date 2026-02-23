class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
    int ans2=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    for(int i=1;i<=n+1;i++){
        ans2^=i;
    }
    return ans ^ans2;
    
}

    
};