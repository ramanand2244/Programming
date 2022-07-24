class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        if(s.length()%2 != 0) return false;
        int open = 0, close = 0;
        for(auto data : s) {
            switch(data) {
                case '(':
                    vec.push_back(data);
                    open++;
                    break;
                case '[':
                    vec.push_back(data);
                    open++;
                    break;
                case '{':
                    open++;
                    vec.push_back(data);
                    break;
                case ')':
                    if(vec.empty()) return false;
                    if ( *(vec.end() - 1) != '(') return false;
                    close++;
                    vec.pop_back();
                    break;
                case ']':
                    if(vec.empty()) return false;
                    if ( *(vec.end() - 1) != '[' ) return false;
                    close++;
                    vec.pop_back();
                    break;
                case '}':
                    if(vec.empty()) return false;
                    if (*(vec.end() - 1) != '{') return false;
                    close++;
                    vec.pop_back();
                    break;
            }
        }
        //if(*(vec.begin()) != NULL ) return false;
        if(open == close) return true;
        if(!vec.empty()) return false;
        return true;
    }
};