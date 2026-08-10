class Solution {
public:
    bool isValid(string str) {
      stack<char> st;

        for(int i=0;i<str.size();i++){
            //opening
            if(str[i]=='('||  str[i]=='{'||  str[i]=='['  ){
                st.push(str[i]);
            }//closing
            else{
                //if stack is already empty so only closing bracket are there
                if(st.size()==0){
                    return false;
                }
                //matching
                if( (st.top()=='(' && str[i]==')' )||
                    (st.top()=='{' && str[i]=='}' )||
                    (st.top()=='[' && str[i]==']' )){
                    st.pop();
                }else{
                    return false;
                }
                    
                }
            }

        

        return st.size()==0;
        
    }
};