You are given a string S of alphabet characters and the task is to find its matching decimal representation as on the shown keypad. Output the decimal representation corresponding to the string. For ex: if you are given “amazon” then its corresponding decimal representation will be 262966.

string printNumber(string s, int n) 
{
    //code here
    string f="";
    unordered_map<char,char> m;
    m['a'] = '2';
    m['b'] = '2';
    m['c'] = '2';
    m['d'] = '3';
    m['e'] = '3';
    m['f'] = '3';
    m['g'] = '4';
    m['h'] = '4';
    m['i'] = '4';
    m['j'] = '5';
    m['k'] = '5';
    m['l'] = '5';
    m['m'] = '6';
    m['n'] = '6';
    m['o'] = '6';
    m['p'] = '7';
    m['q'] = '7';
    m['r'] = '7';
    m['s'] = '7';
    m['t'] = '8';
    m['u'] = '8';
    m['v'] = '8';
    m['w'] = '9';
    m['x'] = '9';
    m['y'] = '9';
    m['z'] = '9';
for(int i=0;i<n;i++){
    f=f+m[s[i]];
}
    return f;
}
