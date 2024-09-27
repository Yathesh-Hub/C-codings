#include <stdio.h>
int main()
{

    int n,ar[100];

    printf("Enter the value:");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    int sum=0,avg;

    for (int i=0;i<n;i++){
        sum+=ar[i];
    }
    avg=sum/n;

    printf("average is:",avg);
}
