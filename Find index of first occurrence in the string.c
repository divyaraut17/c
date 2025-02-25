int strStr(char* haystack, char* needle) {
   if (*needle == '\0') {
        return 0;
    }

    int haystackLen = 0;
    int needleLen = 0;

    // Find the length of haystack and needle
    while (haystack[haystackLen] != '\0') {
        haystackLen++;
    }

    while (needle[needleLen] != '\0') {
        needleLen++;
    }

    // If needle is longer than haystack, return -1
    if (needleLen > haystackLen) {
        return -1;
    }

    // Slide through haystack and check for the substring
    for (int i = 0; i <= haystackLen - needleLen; i++) {
        int j = 0;
        // Compare the substring of haystack starting from index i with needle
        while (j < needleLen && haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == needleLen) {
            return i;  // Found the match, return the starting index
        }
    }

    return -1;  
    
}
