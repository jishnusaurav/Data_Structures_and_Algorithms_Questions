int evaluatePostfix(string arr)
    {
        // Your code here
        stack<int> st;
        for(int i=0;i<arr.length();i++){
            if(arr[i]!='+' and arr[i]!='-' and arr[i]!='*' and arr[i]!='/'){
                st.push((arr[i])-'0');
            }
            else if(arr[i]=='+' ){
                int a= st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b+a);
            }
            else if(arr[i]=='-' ){
                int a= st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b-a);
            }
            else if(arr[i]=='*' ){
                int a= st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b*a);
            }
            else if(arr[i]=='/' ){
                int a= st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b/a);
            }
        }
return st.top();


    }
