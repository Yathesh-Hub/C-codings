#include <stdio.h>
int main()
{

    int i,low,high,mid,n,key,arr[100];

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the Numbers:");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the value of find:");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high){
        mid=(high+low)/2;

        if(arr[mid]<key){
            low=mid+1;
        }
        else if(arr[mid]==key){
            printf("%d is founded in %d location",key,arr[mid]);
        break;
        }
        else{
            high=mid-1;
        }
    }


}
