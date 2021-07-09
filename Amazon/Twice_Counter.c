Given a list of N words. Count the number of words that appear exactly twice in the list.



int countWords(string list[], int n)
        {
           //code here.
           int arr[n];
           unordered_map<string, int> m;
 
    
           for(int i=0;i<n;i++){
               m[list[i]]++;
           }
           int c=0;
           for (auto x : m)
           if(x.second==2)
            c++;
           
           return c;
}
