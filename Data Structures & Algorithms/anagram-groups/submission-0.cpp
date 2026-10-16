class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //mapping charCount to list of Anagrams
        unordered_map<string,vector<string>> res;

        for(const auto& s:strs){
            vector<int>count(26,0);
            for (char c:s){
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for(int i = 1; i < 26; i++){
                key+= ',' + to_string(count[i]);
            }
            res[key].push_back(s);
        }

        vector<vector<string>> result;
        for(const auto& pair : res){
            result.push_back(pair.second);
        }
        return result;
        

        //26 characters
        //big O(m*n*)
        //m for vector
        //n for each string counting



    }
};
