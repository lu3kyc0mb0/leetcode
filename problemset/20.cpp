#include <stack>
class Solution{
public:
    bool isValid(string s){
        stack<char> brackets;
        for(char c : s){
            if(c=='['){
                brackets.push(']');
            }
            else if(c=='{'){
                brackets.push('}');
            }
            else if(c=='('){
                brackets.push(')');
            } 
            else{
                if(brackets.empty() || brackets.top() !=c){
                    return false;
                }
                brackets.pop();
            }
        }
        return brackets.empty();
    }
};