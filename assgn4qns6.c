#include<stdio.h>
#include<math.h>

int main(){
    int a, b, result;
    char op;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operation(+, -, *, /): ");
    scanf("%c", &op);
    
    switch (op)
    {
    case '+':
        result = a + b;
        printf("Sum is %d + %d = %d\n",a, b, result);
        break;
    case '-':
        result = a - b;
        printf("%d - %d = %d\n", a, b, result);
        break;

    case '*':
        result = a*b;
        printf("%d * %d = %d\n", a, b, result);
        break;

    case '/':
        result = a/b;
        printf("%d/%d = %d", a, b, result);
        break;

    default:
        printf("Invalid output.\n");
        break;
    }
    return 0;
}