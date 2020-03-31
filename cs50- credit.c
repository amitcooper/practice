#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long num = get_long("enter credit number:\n");
    int count=0;
    int digit,FirstDigit,SecondDigit;
    int sum1=0,sum2=0;
    int y;
    do
    {
        digit=num%10;
        if(count>0)
        {
            SecondDigit=FirstDigit;
             FirstDigit = digit;
        }
        else
        {
            FirstDigit = digit;
        }
        if(count % 2 == 0)
        {
            sum1+= digit;
           
        }
        else
        {
            digit= digit*2;
            sum2+=digit%10;
            digit=digit/10;
            sum2+=digit;
        }
        num=num/10;
        count++;
        y = FirstDigit*10 + SecondDigit*1;
       
    }
     while(num!=0);
    if((sum1+sum2)%10 != 0 || count<13 || count>16)
    {
        printf("invalid1\n");
    }
    else if(count==15 && (y==34 || y == 37))
    {
        printf("AC");
    }
    else if (count == 16 && y>50 && y<56)
    {
        printf("MC");
    }
    else if ((count == 13 || count == 16) && FirstDigit == 4)
    {
        printf("VISA");
    }
    else
    {
        printf("invalid2\n");
    }

}
