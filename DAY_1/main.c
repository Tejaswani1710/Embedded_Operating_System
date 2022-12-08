#include<stdio.h>
#include"arith.h"
#include"arithmetic.h"
#include"arithmat.h"
void main()
{
    int res = 0;

    res = add(60,20);
    printf("\n Addition = %d",res);

    res = sub(80,50);
    printf("\n Substration = %d",res);

    res = mul(40,22);
    printf("\n Multiplication = %d",res);

    res = div(80,10);
    printf("\n Division = %d",res);

    res = mod(40,10);
    printf("\n Modulus = %d",res);

    res = sqr(10);
    printf("\n Square = %d",res);
}