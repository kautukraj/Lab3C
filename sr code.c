#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n,len, j,co=0,count=0,m;
    scanf("%s %d", str,&n);
    len = strlen(str);

    if (len<n)
        printf("%d",co);
    else
    {
        char ch1[n], ch2[n];
        for (int i=0; i<len-n+1; i++)
        {
            j=i;
            for (int k=0; k<n; k++)
            {
                ch1[k]=str[j];
                j++;
            }
            j=i+1;

            for (int k=0; k<len-i-n; k++)
            {
                m=j;
                for (int l=0; l<n; l++)
                {
                    ch2[l]=str[m];
                    m++;
                }
                if (strncmp(ch1,ch2,n)==0)
                    co++;
                j++;
            }
            if (co==0)
                count++;
            co=0;
        }

        printf("%d",count);


    }
}
