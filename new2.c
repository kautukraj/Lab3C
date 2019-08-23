// Count number of distinct substrings when length of substring is given
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], a[100][100];
    int i, j, l, n, k;
    scanf("%s %d", s, &l);
    n = strlen(s);
    int zero = 0;
    int one = 1;
    if (l > n)
    printf("%d\n", zero);

    else
    {

            for (i = 0; i < n - 1; i++)
            {
                k = 0;
                for (j = i; j < i + l; j++)
                {
                    a[i][k] = s[j];
                    k++;
                }
            }

            
            for (i=0;i<10;i++)
            printf("%s\n",a[i]);



            k = 0;
            for (i = 0; i < n - 1; i++)
            {
                for (j = i + 1; j < n - 1; j++)
                {
                    if (strcmp(a[i], a[j]) == 0)
                        k++;
                }
            }
            printf("%d\n", n - l - (k / 2));
        
    }

    return 0;
}
