#include<stdio.h>
#include<math.h>

int main(){
    int original_num, num, d, sum=0;
    printf("Enter a three digit number: ");
    scanf("%d", &original_num);
    num = original_num;
    while (num>0)
    {
        
        d = num%10;
        sum = sum + pow(d 3);
        num = num/10;
    }
    if(sum ==original_num){
        printf("%d is an Armstrong number.\n", original_num);
    }else{
        printf("%d is not an Armstrong number.\n", original_num);
    }
    return 0;
}