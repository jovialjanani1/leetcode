bool isAnagram(char* s, char* t) {
    int counts[26] = {0};
    int i = 0;
    while (s[i] != '\0') {
        counts[s[i] - 'a']++;
        i++;
    }
    i = 0;
    while (t[i] != '\0') {
        counts[t[i] - 'a']--;
        i++;
    } 
    for (int j = 0; j < 26; j++) {
        if (counts[j] != 0) {
            return false;
        }
    } 
    return true;
} 
