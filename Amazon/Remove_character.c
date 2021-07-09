Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).

 string removeChars(string s1, string s2) {
        // code here
        for(int i=0;i<s2.length();i++){
        s1.erase(remove(s1.begin(), s1.end(), s2[i]), s1.end());
        }
        cout<<s1;
    }
