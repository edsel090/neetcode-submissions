class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }else if(s == t){
            return true;
        }

        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        for(int i = 0; i < s.length(); i++){
            mp2[t[i]]++;
            mp[s[i]]++;
        }

        if(mp == mp2){
            return true;
        }

        return false;
    }
};
