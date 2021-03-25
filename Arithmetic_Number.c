class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(C==0 && A==B)
        return 1;
        else if( C==0 & A!=B) return 0;
        
        if((B-A)/C<0)
        return 0;
        else{
        if(((B-A)%C==0))
        return 1;
        else return 0;
        }}
};
