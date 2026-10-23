int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;
    int left = 0;
    int lastSeen[256];
    memset(lastSeen, -1, sizeof(lastSeen));
    
    for (int right = 0; right < n; right++) {
        unsigned char currentChar = s[right];
        if (lastSeen[currentChar] >= left) {
            left = lastSeen[currentChar] + 1;
        }
        lastSeen[currentChar] = right;
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}
