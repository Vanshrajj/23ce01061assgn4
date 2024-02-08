#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num%2)
    {
    case 0:
        printf("%d is even.\n", num);
        break;
    
    case 1:
    case -1:
        printf("%d is odd.\n", num);
        break;
    
    default:
        printf("Invalid input.\n");
        break;
    }
    return 0;
}