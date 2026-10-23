int findNumbers(int* num, int numssize) {
    int count = 0, i, digit;

    for (i = 0; i < numssize; i++) {
        digit = 0;
        int n = num[i];

        while (n > 0) {
            digit++;
            n /= 10;
        }

        if (digit % 2 == 0)
            count++;
    }

    return count;
}
