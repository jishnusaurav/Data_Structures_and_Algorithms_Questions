string reverseWords (string str)
    {
    stack<int> st;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ')
            st.push(str[i]);

        // When we see a space, we print contents
        // of stack.
        else {
            while (st.empty() == false) {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
    }

    // Since there may not be space after
    // last word.
    while (st.empty() == false) {
        cout << st.top();
        st.pop();
    }    
}
