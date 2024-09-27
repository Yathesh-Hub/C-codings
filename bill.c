#include <stdio.h>
int main() {
    int customerID, unitConsumed;
    char name[50];
    float charge, totalAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitConsumed);

    if (unitConsumed <= 199) {
        charge = unitConsumed * 1.20;
    } else if (unitConsumed >= 200 && unitConsumed < 400) {
        charge = unitConsumed * 1.50;
    } else if (unitConsumed >= 400 && unitConsumed < 600) {
        charge = unitConsumed * 1.80;
    } else {
        charge = unitConsumed * 2.00;
    }

    if (charge > 400) {
        charge += charge * 0.15;
    }

    if (charge < 100) {
        charge = 100;
    }

    totalAmount = charge;

    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Total Amount to be Paid: %.2f\n", totalAmount);

    return 0;
}


