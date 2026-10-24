#include <stdio.h>

int main() 
{
    int memb, bill, org_bill, disc = 0, d = 0;
    
    printf("Enter the amount of bill: ");
    scanf("%d", &bill);
    
    
    org_bill = bill; 
    
    printf("\nDo you have a premium membership?\n 0. No \n 1. Yes\n Input: ");
    scanf("%d", &memb);
    
    
    if (bill > 500) {
        if (memb == 1) {
            disc = (bill * 10) / 100; 
            bill = bill - disc;
        }
    } 
    else {
        
        d = 50; 
        bill = bill + d;
    }
    
    
    printf("\n******************************");
    printf("\nThe bill is        : %d", org_bill);
    printf("\nDelivery charges  +: %d", d);
    printf("\nDiscount           -: %d", disc);
    printf("\n******************************");
    printf("\nTOTAL IS           : %d\n", bill);
    
    return 0;
}

