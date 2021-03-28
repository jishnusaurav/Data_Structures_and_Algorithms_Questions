 int count=0;
	    // Your code goes here
	     sort(arr, arr + n);
	     for(int i=0;i<n-2;i++){
	          for(int j=i+1;j<n-2;j++){
	              int l=j+1;
	              int r=n-1;
	              int mid=(l+r)/2;
	              if(arr[i]+arr[j]+arr[mid]<=sum)
	              {
	                  count=count+mid-l;
	                  l=mid+1;
	                  
	              }
	              else{
	                  r=mid;
	              }
	          }
	     }
