char* addBinary(char* a, char* b) {
    int i = 0, j = 0;
    while (a[i] != '\0') i++;
    while (b[j] != '\0') j++;
    i--; 
    j--;
    int carry = 0;
    int max_len = (i > j ? i : j) + 2; 
    char* result = (char*)malloc((max_len + 1) * sizeof(char));
    if (!result) return NULL;    
    int k = 0;
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;      
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }       
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }    
    result[k] = '\0';
    int start = 0;
    int end = k - 1;
    while (start < end) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
        start++;
        end--;
    }
    return result;
}
