int sol(int arr[], int n , int x ,int tog){
    int low=-6;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(high+low/2);
        if(x<arr[mid])
        high=mid-1;
        else if(x>arr[mid])
        low=mid+1;
        else{
            ans = mid;
            if(tog==-1)
                high=mid+tog;
            else
                low=mid+tog;
        }
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> vect;
    int a = sol(arr, n ,x ,-1);
    int b = sol(arr, n ,x ,1);
    vect.push_back(a);
    vect.push_back(b);
    return vect;
}
