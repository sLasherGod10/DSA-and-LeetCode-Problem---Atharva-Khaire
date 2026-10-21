class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char , int > st;


        for( int i = 0 ; i < magazine.size() ; i++){
            st[magazine[i]]++;
        }
        for( int i = 0 ; i < ransomNote.size() ; i++){
            if( st[ransomNote[i]] == 0){
                return false;
            }
            st[ransomNote[i]]--;
        }
        return true;
    }
};