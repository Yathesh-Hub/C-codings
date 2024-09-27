#include <stdio.h>
int main()
{

    int a[100],s,sum,av=0;
    printf("Enter the number of elements:");
    scanf("%d",&s);
    printf("Enter the elements");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        av=sum/s;
    }
    printf("Average:%d",av);
}
