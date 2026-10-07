int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    long dvd = llabs((long)dividend);
    long dvs = llabs((long)divisor);
    long quotient = 0;
    while (dvd >= dvs) {
        long temp = dvs;
        long multiple = 1;
        while ((temp << 1) <= dvd) {
            temp <<= 1;
            multiple <<= 1;
        }
        dvd -= temp;
        quotient += multiple;
    }
    if ((dividend < 0) ^ (divisor < 0))
        quotient = -quotient;

    return (int)quotient;
}
