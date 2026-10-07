char* reverseWords(char* s) {
    if (s == 0 || *s == '\0') {
        return s;
    }
    int n = 0;
    while (s[n] != '\0') n++;
    int left = 0, right = n - 1;
    while (left < right) {
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
    int write_idx = 0; 
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            if (write_idx != 0) {
                s[write_idx++] = ' ';
            }
            int word_start = write_idx;
            while (i < n && s[i] != ' ') {
                s[write_idx++] = s[i++];
            }
            int word_end = write_idx - 1;
            while (word_start < word_end) {
                char temp = s[word_start];
                s[word_start++] = s[word_end];
                s[word_end--] = temp;
            }
        }
    }
    s[write_idx] = '\0';
    return s;
}
