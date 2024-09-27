#include <stdio.h>
int main() {
    int num, originalnum, rem , result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalnum = num;

    while (originalnum != 0)
  {
        rem = originalnum % 10;
        result += rem*rem*rem ;
        originalnum /= 10;
    }

    if (result == num)
 {
        printf("%d is an Armstrong number.\n", num);
    } else
 {
        printf("%d is not an Armstrong number.\n", num);
  }

    return 0;
}
