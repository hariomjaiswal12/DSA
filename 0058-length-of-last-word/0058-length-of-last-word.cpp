class Solution {
public:
    int lengthOfLastWord(string s) {
      stack<char> st;
      for(int i=0; i<s.length(); i++){
        st.push(s[i]);
      }
      while(!st.empty() && st.top()==' '){
        st.pop();
      }
      int length = 0;
      while(!st.empty() && st.top()!=' '){
        length++;
        st.pop();
      }
      return length;
    }
};