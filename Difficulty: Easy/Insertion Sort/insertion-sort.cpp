class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n=arr.size();
        // code here
        for(int i=0;i<n;i++){
            int temp=arr[i];
            int j=i-1;
            for(;j>=0;j--){
                if(arr[j]>temp){
                    //shift
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
            }arr[j+1]=temp;
        
            
        }
    }
};