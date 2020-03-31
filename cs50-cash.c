#include <cs50.h> 
#include <stdio.h> 

int main(void)
{
    float f = get_float("how much change is owed?\n");
    int count = 0;
    while(f > 0)
    {
        if(f >= 0.25)
        {
            f = f - 0.25;
            count++;
        }
        else if(f >= 0.1)
        {
            f = f - 0.1;
            count++;
        }
        else if(f >= 0.05)
        {
            f= f - 0.05;
            count++;
        }
        else
        {
            f= f - 0.01;
            count++;
        }
    }
    printf("%d\n",count);
}
