class Solution {
  public:
  bool solve(int arr[],int n,int mid,int m){
      int sum=0;
      int stu=1;
      for(int i=0;i<n;i++){
      if(arr[i]>mid) return false;
      if(sum+arr[i]>mid){
      stu++;
      sum=arr[i];
      if(stu>m) return false;
      }
      else sum+=arr[i];
      }
  }
    int findPages(int arr[], int n, int m) {
        //code here
        int ub=0;
        for(int i=0;i<n;i++) ub=ub+arr[i];
        
        int lb=0;
        int mid,ans;
        while(lb<=ub){
            int mid=(lb+ub)/2;
            if(solve(arr,n,mid,m)){
            ans=mid;
            ub=mid-1;
            }
            else
            lb=mid+1;
            
        }
            return ans;

    }
};
