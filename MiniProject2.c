/******************************************************************************
Esther Lee, Elijah Tipton, Austin Marshburn
ELET 1102
Project 2: Iteration - Discount Electronics
This code displays the price of a product based on its item number, unit price, and 
quantity.
*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("| Item Number |     Description     | Discount 0-299 | Discount 300-499 | Discount 500+ |\n");
    printf("|      0      |      Resistor       |       5%%       |       7.5%%       |       10%%     |\n");
    printf("|      1      |      Capacitor      |       5%%       |       7.5%%       |       10%%     |\n");
    printf("|      2      |     Transistor      |      2.5%%      |        5%%        |       10%%     |\n");
    printf("|      3      | Integrated Circuits |      2.5%%      |        5%%        |       10%%     |\n");
    
    int quantity;
    int itemNum;
    double unitCost;
    double discTotal;
    double ogPrice;
    double discount;
    
    printf("\nEnter the quantity, item number, and unit cost: ");
    scanf("%d %d %lf", &quantity, &itemNum, &unitCost);
    
    if(itemNum == 0 || itemNum == 1){
        if(quantity > 0 && quantity <= 299){
            discount = 5;
        } else if(quantity >= 300 && quantity <= 499){
            discount = 7.5;
        } else if(quantity >= 500){
            discount = 10;
        }
    }
    
    if(itemNum == 2 || itemNum == 3){
        if(quantity > 0 && quantity <= 299){
            discount = 2.5;
        } else if(quantity >= 300 && quantity <= 499){
            discount = 5;
        } else if(quantity >= 500){
            discount = 10;
        }
    }
    
    ogPrice = unitCost * quantity;
    discTotal = ogPrice - (ogPrice * (discount / 100));
    
    printf("The original price is: $%lf\nThe discount offered is: %lf%%\nThe total discounted price is: $%lf", ogPrice, discount, discTotal);
    
    return 0;
}
