The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.

long long  numberOfPaths(int m, int n)
{
    // Code Here
    if(m==1 || n==1)
    return 1;
    return numberOfPaths(m-1,n)+numberOfPaths(m,n-1);
}
