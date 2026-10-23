int maximumSwap(int num) {
    char str[12];
    sprintf(str, "%d", num);
    int len = strlen(str);
    int last[10] = {-1};
    for (int i = 0; i < len; i++) {
        last[str[i] - '0'] = i;
    }
    for (int i = 0; i < len; i++) {
        int currentDigit = str[i] - '0';
        for (int d = 9; d > currentDigit; d--) {
            if (last[d] > i) {
                char temp = str[i];
                str[i] = str[last[d]];
                str[last[d]] = temp;
                int result;
                sscanf(str, "%d", &result);
                return result;
            }
        }
    }
    
    return num; // Return original if no swap can maximize it
}
