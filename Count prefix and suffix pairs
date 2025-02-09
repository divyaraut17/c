static inline bool ispns(char * s, char * c){
    int ss = strlen(s), cs = strlen(c);
    for(int i = 0; i < ss; i++)if(s[i] != c[i]) return false;
    for(int i = 0; i < ss; i++) if(s[ss-i-1] != c[cs-i-1]) return false;
    return true;
}
int countPrefixSuffixPairs(char** words, int wordsSize) {
    int w = wordsSize, cnt = 0;
        for( int i = 0; i < w; i++) 
            for(int j = i+1; j < w; j++) 
                if(strlen(words[j]) >= strlen(words[i]))
                    if(ispns(words[i], words[j]))cnt++;

        return cnt;
}
