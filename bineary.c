#include <stdio.h>
int main()
{

    int i,n,mid,low,high,key,arr[100];

    printf("Enter the number of Element:");
    scanf("%d",&n);

    printf("Enter the numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

        printf("Enter the value to find:");
        scanf("%d",&key);
        low=0;
        high=n-1;

        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]<key)
                low=mid+1;
            else if(arr[mid]==key){
                printf("%d is founded in %d location",key,arr[mid]);
                break;\
            }
            else
            high=mid-1;

        }
        if(low>high){
            printf("%d is not in a list",key);
        }

}
