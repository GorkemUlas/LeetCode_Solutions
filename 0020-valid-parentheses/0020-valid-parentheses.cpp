#include <iostream>
#include <stack>
#include <string>

using std::string;

class Solution {
public:
    bool isValid(string& s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::stack<char> stack;
        for(char c: s ){
            if(c== '(' ){stack.push(')');}
            else if (c== '{' ){stack.push('}');}
            else if (c== '[' ){stack.push(']');}           
        
            else{
            if (stack.empty()) return false;
            if (stack.top() != c || stack.empty()) {return false;}
            stack.pop();
            }
            

        }
        return stack.empty();

        
    }
};