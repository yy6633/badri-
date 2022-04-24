#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
  float v1;
  float v2;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%c",&operator);

  switch(operator)
    {
        
    case '/':
    scanf("%f %f", &v1,& v2);
    answer = v2/v1;
printf("%.9f",answer);
      break;
    case '*':
     scanf("%f %f", &v1,& v2);
     answer = v1*v2;
printf("%.9f",answer);
      break;
    case '+':
    scanf("%f %f", &v1,& v2);
    answer = v1+v2;
printf("%.9f",answer);
      break;
    case '-':
    scanf("%f %f", &v1,& v2);
    answer = v1-v2;
printf("%.9f",answer);
      break;
    case '^':
    scanf("%f %f", &v1,& v2);
    answer = pow(v1,v2);
printf("%.9f",answer);
      break;
    case 'r': answer = sqrt(v2);
printf("%.9f",answer);
      break;
   default :
printf("enter correct operator");
    }
  
  return 0;
}

