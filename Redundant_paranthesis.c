/* C++ Program to check whether valid
expression is redundant or not*/
#include <bits/stdc++.h>
using namespace std;

// Function to check redundant brackets in a
// balanced expression
bool checkRedundancy(string& str)
{
	// create a stack of characters
	stack<char> st;

	// Iterate through the given expression
	for(int i=0;i<str.length();i++){
	    if(str[i]=='(' || str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' ){
	    st.push(str[i]);
	    }
	    
	    else if(str[i]==')'){
	        if(st.top()=='('){
	        return true;
	        }
	        else if(st.top()=='+' ||st.top()=='-' ||st.top()=='/' ||st.top()=='*'){
	            st.pop();
	            if(st.top()=='('){
	            st.pop();
	            }
	        }
	        
	    }
	}
	        if(st.empty())
	        return true;
	        else
	        return false;
}	

// Function to check redundant brackets
void findRedundant(string& str)
{
	bool ans = checkRedundancy(str);
	if (ans == true)
		cout << "Yes\n";
	else
		cout << "No\n";
}

// Driver code
int main()
{
	string str = "((a+b))";
	findRedundant(str);

	str = "(a+(b)/c)";
	findRedundant(str);

	str = "(a+b*(c-d))";
	findRedundant(str);

	return 0;
}
