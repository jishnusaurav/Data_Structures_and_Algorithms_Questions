Given a street of N houses (a row of houses), each house having K amount of money kept inside; now there is a thief who is going to steal this money but he has a constraint/rule that he cannot steal/rob two adjacent houses. Find the maximum money he can rob.
 
int maximizeMoney(int N , int K) {
        // code here
        if(N%2==0)
        return N*K/2;
        else return ((N/2)+1)*K;
}
