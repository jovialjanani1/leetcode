int expand(char* s, int left, int right) {
    int count = 0;
    while (left >= 0 && s[right] != '\0' && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}
int countSubstrings(char* s) {
    int total = 0;
    int i = 0;
    
    while (s[i] != '\0') {
        total += expand(s, i, i);     
        total += expand(s, i, i + 1); 
        i++;
    }
    return total;
}

