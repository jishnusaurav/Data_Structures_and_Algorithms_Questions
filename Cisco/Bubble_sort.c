void swap1(int arr[],int i, int j){
    int x;
    x=arr[i];
    arr[i]=arr[j];
    arr[j]=x;
    
}
void bubbleSort(int arr[], int n)
{
    // Your code here    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap1(arr,j,j+1);
        }
    }
}
