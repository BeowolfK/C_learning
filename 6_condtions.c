#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    double num1;
    double num2;
    double result;
    char op;
    printf("Enter first number : ");
    scanf("%lf", &num1);
    printf("Enter operator : ");
    scanf("%s", &op);
    printf("Enter first number : ");
    scanf("%lf", &num2);
    if (op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*'){
        result = num1 * num2;
    } else if (op == '/'){
        result = num1 / num2;
    } else{
        printf("Unsupported operator\n");
        exit(EXIT_SUCCESS);
    }
    printf("The result is : %lf\n", result );

    return 0;
}