
class Solution
{
    public:
        bool checkzeroes(int p,int n){
            int temp = p;
            int count = 0;
            int f=5;
            while(f<=temp){
                count=count+temp/f;
                f=f*5;
            }
            return (count>=n);
        }
        
        int findNum(int n)
        {
        //complete the function here
        if(n==1)
        return 5;
        
        int low=0;
        int high = 5*n;
        
        while(low<high){
            int mid=(low+high)/2;
            if(checkzeroes(mid,n)){
                high=mid;
            }
            else
            low=mid+1;
        }
        
        return low;
        
        }
};
