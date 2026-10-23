char* simplifyPath(char* path) {
    int n = strlen(path);
    char** stack = (char**)malloc(n * sizeof(char*));
    int top = 0;
    
    char* pathCopy = strdup(path);
    char* token = strtok(pathCopy, "/");
    
    while (token != NULL) {
        if (strcmp(token, ".") == 0 || strlen(token) == 0) {
            // Skip
        } else if (strcmp(token, "..") == 0) {
            if (top > 0) {
                top--;
            }
        } else {
            stack[top++] = token;
        }
        token = strtok(NULL, "/");
    }
    
    char* result = (char*)malloc((n + 1) * sizeof(char));
    result[0] = '\0';
    
    if (top == 0) {
        strcpy(result, "/");
    } else {
        for (int i = 0; i < top; i++) {
            strcat(result, "/");
            strcat(result, stack[i]);
        }
    }
    
    free(pathCopy); 
    free(stack);   
    
    return result;
}
