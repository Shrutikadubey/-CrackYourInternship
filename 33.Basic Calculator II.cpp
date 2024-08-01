//problem:Given a string s which represents an expression, evaluate this expression and return its value. The integer division should truncate toward zero.
//You may assume that the given expression is always valid. All intermediate results will be in the range of [-231, 231 - 1].

//solution:
stack<int> st;
        char opr = '+';
        int currentNum =0;

        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(isdigit(c)){
                currentNum=currentNum*10 + (c-'0');
            }
            if((!isdigit(c) && c!=' ')||i==s.length()-1){
                if(opr=='+'){
                    st.push(currentNum);
                }else if(opr=='-'){
                    st.push(-currentNum);
                }else if(opr=='*'){
                    int val = st.top();
                    st.pop();
                    st.push(val*currentNum);
                }else if(opr=='/'){
                    int val=st.top();
                    st.pop();
                    st.push(val/currentNum);
                }
                opr = c;
                currentNum=0;
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
