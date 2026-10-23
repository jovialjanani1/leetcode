#include <stdlib.h>
#include <string.h>

void solve(char **ans, char *s, int pos, int open, int close, int n, int *count)
{
    if (pos == 2 * n)
    {
        s[pos] = '\0';
        ans[*count] = malloc(2 * n + 1);
        strcpy(ans[*count], s);
        (*count)++;
        return;
    }

    if (open < n)
    {
        s[pos] = '(';
        solve(ans, s, pos + 1, open + 1, close, n, count);
    }

    if (close < open)
    {
        s[pos] = ')';
        solve(ans, s, pos + 1, open, close + 1, n, count);
    }
}

char** generateParenthesis(int n, int* returnSize)
{
    char **ans = malloc(10000 * sizeof(char *));
    char *s = malloc(2 * n + 1);

    *returnSize = 0;

    solve(ans, s, 0, 0, 0, n, returnSize);

    free(s);
    return ans;
}
