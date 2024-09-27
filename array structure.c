#include <stdio.h>
struct student{
    char name[50];
    int roll;
    float m;
    }s;
    int main()
    { struct student s[50];

        int i=0;
        printf("Enter info:\n");
        for (int i=0;i<5;i++)

        printf("Enter name:");
        scanf("%s",s.name);
        printf("Enter roll n:");
        scanf("%d",&s.roll);
        printf("Enter mark:");
        scanf("%f",&s.m);
        printf("Display info:\n");
        printf("Name:%s\n",s.name);
        printf("Roll number:%d\n",s.roll);
        printf("Marks:%f",s.m);
        return 0;

    }

