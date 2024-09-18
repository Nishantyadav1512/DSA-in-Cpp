class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            // if opening bracket, stack push
            if(ch == '(' || ch == '[' || ch == '{'){
                c.push(ch);
            }
            else{
                // if closing bracket, stack top check and pop
                if(!c.empty()){
                    char top = c.top();
                    if((ch == ')' && top == '(') ||
                       (ch == '}' && top == '{') ||
                       (ch == ']' && top == '[')){
                        c.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        // Check if stack is empty at the end
        return c.empty();
    }
};
