
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int l1=a.length();
        int l2=b.length();
        if(l1!=l2)
        return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<l1;i++){
            if(a[i]!=b[i])
            return false;
        }
        return true;
    }

};
