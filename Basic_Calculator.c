/*    The code is a basic calculator program that performs arithmetic operations on two input numbers.
      The user is prompted to enter two values, which are stored in variables a and b.
      The user is then asked to choose an arithmetic operation (addition, subtraction, multiplication, or division)
      by entering a corresponding number.   */

#include<stdio.h>

int main()
{
  int a , b , sum , sub , mul , divi;
  int i;
  
  printf(" Enter two values of :-\n");
  scanf(" %d %d",&a,&b);
  printf("\n  a : %d \n  b : %d \n ",a,b);
  
  
  printf("\n What action do you want to perform inside the calculator ?\n");
  printf("\n Addition = 1 \n Subtraction = 2 \n Multiplication = 3 \n Division = 4 \n");
  scanf("%d",&i);
  
  for(i ; i<= 4 ;++i)
  {
    if(i==1)
    {
        sum = a + b;
        printf("\n So the Addition of 'a' and 'b' is:-> %d \n",sum);
        break;
    }
    
    else if(i==2)
    
    {
       sub = a - b;
       printf("\n So the subtraction of 'a' and 'b' is:-> %d \n",sub);
       break; 
    }
    
    else if(i==3)
    
    {
         mul = a * b;
         printf("\n So the multiplication of 'a' and 'b' is:-> %d \n",mul);
         break;  
    }
    else if(i==4)
    {
        divi = a / b;
        printf("\n So the division of 'a' and 'b' is:-> %d \n",divi);
        break;
    }
    
    else
    {
        printf("Invalid Input"); 
        break;
    }
    
  }
  
  if ( i < 1 || i > 4)
    {
        printf("\nInvalid Input\n");
    }
  return 0;
} 
