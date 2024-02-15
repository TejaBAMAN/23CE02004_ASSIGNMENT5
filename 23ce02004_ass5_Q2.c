#include<stdio.h>
int main(){
    int number,dividend,divisor,quotient,remainder,a;
    printf("\n enter a dividend:");
    scanf("\n%d",&dividend);
     printf("\n enter a divisor:");
    scanf("\n%d",&divisor);
    number = dividend;
    a = dividend;
    for (;number >0; )
    {number=dividend-divisor;
    dividend=number;
       quotient++;
    }
    remainder=a-(divisor*quotient);
    if(remainder<0){
        remainder=divisor+remainder;
        quotient=quotient-1;
    }
    printf("\nquotient is :%d",quotient);
    printf("\nremainder is :%d",remainder);
    return 0;
}//

//int sum=0;
//while(n>0){
  //  int d = n%10;
  //  sum += d*d*d;
  //  n= n/10;
//}