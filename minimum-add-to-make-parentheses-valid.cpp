class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stck;
        int count = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='(') {
                stck.push('(');
            }
            else if(s[i]==')' && !stck.empty()) {
                stck.pop();
            }
            else if(s[i]==')' && stck.empty()) {
                count++;
            }
        }
        count += stck.size();
        return count;
    }
};