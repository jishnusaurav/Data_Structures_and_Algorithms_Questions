void find4Numbers(int A[], int n, int X)
{
    int l, r;
    qsort (A, n, sizeof(A[0]), compare);
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i+1; j < n - 2; j++)
        {
            l = j + 1;
            r = n-1;
            while (l < r)
            {
                if( A[i] + A[j] + A[l] + A[r] == X)
                {
                    cout << A[i]<<", " << A[j] <<", " << A[l] << ", " << A[r];
                    l++; r--;
                }
                else if (A[i] + A[j] + A[l] + A[r] < X)
                    l++;
                else // A[i] + A[j] + A[l] + A[r] > X
                    r--;
            }
        } 
    }
}
