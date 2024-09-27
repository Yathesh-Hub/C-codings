#include <stdio.h>
int main()
{
    char s[10];
    printf("Enter the String:");
    scanf("%s",s);
    int si=0,i=0;
    while(s[i]!='\0')
    {
        si++;
        i++;
    }
    printf("%d",si);
}
