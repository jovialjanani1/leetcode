char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int carry = 0;

    int max_size = (i > j ? i : j) + 3; 
    char* res = malloc(max_size);
    
    int k = max_size - 1; 
    res[k--] = '\0'; 

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += num1[i--] - '0';
        if (j >= 0) sum += num2[j--] - '0';

        res[k--] = (sum % 10) + '0';
        carry = sum / 10;
    }

    return &res[k + 1];
}
