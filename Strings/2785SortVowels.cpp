class Solution {
public:
    bool isVowel(char c)
    {
        c=tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    string sortVowels(string s) {

        vector<char>vowel;

        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                vowel.push_back(s[i]);
            }
        }

        sort(vowel.begin(),vowel.end());

        int vowel_index = 0;
        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                s[i] = vowel[vowel_index];
                vowel_index++;
            }
        }
        return s;
    }
};
