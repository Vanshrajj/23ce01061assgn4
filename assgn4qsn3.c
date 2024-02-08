#include<stdio.h>
#include<math.h>

int main(){
    
    int credit_score;
    float interest, current_balance;
    printf("Enter current balance: ");
    scanf("%f", &current_balance);
    printf("Enter credit score: ");
    scanf("%d", &credit_score);
    switch (credit_score)
    {
    case 0 ... 599:
        interest = 0.15;
        printf("Interest is %f\n", interest*current_balance);
        break;

    case 600 ...  750:
        interest = 0.12;
        printf("Interest is: %f\n", interest*current_balance);
        break;
    
    default:
        interest = 0.10;
        printf("Interest is: %f\n", interest*current_balance);
        break;
    }
    return 0;
    
}