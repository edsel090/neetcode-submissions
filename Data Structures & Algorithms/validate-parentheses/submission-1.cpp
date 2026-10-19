class Solution {
public:
    bool isValid(string s) {
        if(s.empty()){
            return false;
        }
        stack<char> track;
        for(char c : s){
            if(!track.empty() && track.top() == '{' && c == '}'){
                track.pop();
            }else if(!track.empty() && track.top() == '(' && c == ')'){
                track.pop();
            }else if(!track.empty() && track.top() == '[' && c == ']'){
                track.pop();
            }else{
                track.push(c);
            }
        }
        if(track.empty()){
            return true;
        }else{
            return false;
        }
    }
};
