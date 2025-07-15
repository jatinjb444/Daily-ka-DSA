class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3) return false;
        bool a  = false , b = false;
        for(int i = 0 ; i < word.size(); i++){
                if(isalpha(word[i])){
                word[i] = tolower(word[i]);
                if(word[i] == 'a' || word[i] == 'e' ||word[i] == 'i' ||
                word[i] == 'o' ||word[i] == 'u')  a = true;
                else  b = true;
            }
            else if (!isdigit(word[i])){
                return false;
            }
        }
        return (a && b);
    }
};