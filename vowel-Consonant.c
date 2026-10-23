int vowelConsonantScore(char* s) {
    int i,v=0,c=0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                v++;
            } else {
                c++;
            }
        }
    }
    if (c == 0)
        return 0;
    return v / c;
}
