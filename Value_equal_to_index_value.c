class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> vect;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	        vect.push_back(i+1);
	        count++;}
	    }
	    return vect;
	}
};
