#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char s[50];
    int l,k,c=0,f=0;
    int fr[10];
    char arr[10][10];
    scanf("%s", s);
    int len = strlen(s);
    scanf("%d", &l);

    int i=0;
    int res=1;
    int j=0;
    while (i<=(len-l))
    {
        k=i;
        for (j=1; j<=l; j++)
        {
            arr[i][j-1] = s[k];
            printf("Element at %d  %d position is %c\n",i, j-1, arr[i][j-1]);
            k++;
        }
        i++;
    }


    for (i=0; i<5; i++)
    {
        for (j=2; j<10; j++)
        {
            arr[i][j]='\0';
        }
    }

    int unique = 1;
    for(int i = 0; i < 1 ; i++)
    {
        if(strcmp (arr[i],arr[i+1]) == 0)
            continue;
        else
            unique++;
    }
    printf("The number of unique elements are %d ",unique);

    return 0;
}
