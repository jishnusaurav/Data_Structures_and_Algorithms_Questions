Given two values N and M. Give the value when N is halved M-1 times.

int mthHalf(int N, int M){
        // code her
        
            while(M-1>0){
                if(N==0)
                return 0;
               else {N =N/2;
                M--;}
            }
            return N;
        }
    
