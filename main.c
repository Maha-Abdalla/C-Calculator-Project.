#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float addition(float x, float y);
float subtraction(float x, float y);
float multplication(float x, float y);
float division(float x, float y);
void answer(float ans);

int main()
{
float num1, num2, result;
char operatoR, option = 'y';

while(option == 'Y' || option == 'y')
{
printf("Enter the numbers you want to do operation for: ");
scanf("%f%f", &num1, &num2);

printf("Enter operation sign: ");
scanf(" %c", &operatoR);

switch(operatoR){

case  '+':
result = addition(num1, num2);
answer(result);
break;

case '-':
result = subtraction(num1, num2);
answer(result);
break;

case '*':
result = multplication(num1, num2);
answer(result);
break;

case '/':
    if(num2 != 0){
result = division(num1, num2);
answer(result);
    }
    else
    printf("The division by 0 can not be!\n\n");
break;

   default:
    printf("Please enter VALID operator!\n\n");
}
  printf("Do you want to do another operation(Y/N)? ");
  scanf(" %c", &option);
    }
    return 0;
}

float addition(float x, float y)
{
    return(x + y);
}
float subtraction(float x, float y)
{
    return(x - y);
}
float multplication(float x, float y)
{
        return(x * y);
}
float division(float x, float y)
{
      return (x / y);
}
void answer(float ans)
{
    printf("The result from the operation is: %.2f\n\n", ans);
}

