class Solution{
    public:
    long long int binarysearch(int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        long long int square=(long long int )mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans =mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
    
    
}
double squareRoot(int n,int precision){
    long long int tempsol = binarysearch(n);   
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans =j;
        }
    }return ans;
}
};