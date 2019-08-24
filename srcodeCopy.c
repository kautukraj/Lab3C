
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int med,n,l,j,zero=0,c=0;
    scanf("%s %d", s,&n);
    char arr1[n], arr2[n];
    l = strlen(s);

    if (l<n)
        printf("%d",zero);
    else
    {
        for (int i=0; i<l-n+1; i++)
        {
            j=i;
            for (int k=0; k<n; k++)
            {
                arr1[k]=s[j];
                j++;
            }
            j=i+1;

            for (int k=0; k<l-i-n; k++)
            {
                med=j;
                for (int l=0; l<n; l++)
                {
                    arr2[l]=s[med];
                    med++;
                }
                if (strncmp(arr1,arr2,n)==0)
                    zero++;
                j++;
            }
            if (zero==0)
                c++;
            zero=0;
        }

        printf("%d",c);


    }
}
