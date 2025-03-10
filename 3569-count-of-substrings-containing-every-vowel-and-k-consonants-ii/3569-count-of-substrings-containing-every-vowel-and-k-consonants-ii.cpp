class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    long long countOfSubstrings(string word, int k) {
        return atleastk(word,k) - atleastk(word,k+1);
    }
    long long atleastk(string word, int k){
        long long ans = 0;
        
        int start=0;
        int end=0;

        unordered_map<char,int>vowels;
        int consonant = 0;

        while(end<word.length()){
            char ch = word[end];
            if(isVowel(ch)){
                vowels[ch]++;
            }else{
                consonant++;
            }

            while(vowels.size()==5 && consonant >=k){
                ans+=word.length()-end;
                char st = word[start];

                if(isVowel(st)){
                    if(--vowels[st]==0){
                        vowels.erase(st);
                    }
                }else{
                    consonant--;
                }
                start++;
            }
            end++;
        }
        return ans;
    }
};