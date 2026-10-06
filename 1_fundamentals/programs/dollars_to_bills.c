#include <stdio.h>

int main(void)
{
    int twenty_dollars = 20, ten_dollars = 10, five_dollars = 5, one_dollars = 1;

    int amount;
    printf("Enter amount integer: ");
    scanf("%d", &amount);

    // calc 20 bils
    int balance = amount % twenty_dollars;
    int twenty_bills = (amount - balance) / twenty_dollars;
    amount = amount - twenty_dollars * twenty_bills;

    // calc 10 bils
    balance = amount % ten_dollars;
    int ten_bills = (amount - balance) / ten_dollars;
    amount = amount - ten_dollars * ten_bills;

    // calc 5 bils
    balance = amount % five_dollars;
    int five_bills = (amount - balance) / five_dollars;
    amount = amount - five_dollars * five_bills;

    // calc 1 bils
    balance = amount % one_dollars;
    int one_bills = (amount - balance) / one_dollars;

    printf("$20: %d, $10: %d, $5: %d, $1: %d\n", twenty_bills, ten_bills, five_bills, one_bills);

    return 0;
}