#include <stdio.h>
int arm(int n)
{
    int o,r,f=0;

    o=n;

    while(o!=0){
        r=o%10;
        f+=r*r*r;
        o/=10;
    }
    return (f==n);
}
int main()
{
    for(int n=100;n<999;n++){
        if(arm(n)){
            printf("%d\n",n);
        }
    }
}

