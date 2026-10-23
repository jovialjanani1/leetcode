char* complexNumberMultiply(char* num1, char* num2) {
    int r1,i1;
    int r2,i2;
    sscanf(num1, "%d+%di", &r1, &i1);
    sscanf(num2, "%d+%di", &r2, &i2);
    int realresult =(r1 * r2)-(i1 * i2);
    int imagresult=(r1 * i2)+(i1 * r2);
    char*result =(char*)malloc(50 * sizeof(char));
    sprintf(result, "%d+%di",realresult,imagresult);
    return result;
}
