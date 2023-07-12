#include "bitconversion12.h"
void print_bits(int num)
{
    int bit_count =0;
    int temp = num;
    while(temp!=0)
    {

        bit_count++;
        temp>>=1;
    }

    for(int i=bit_count-1;i>=0;i--)
    {
        int mask =1<<i;
        int bit = (num&mask)>>i;
      printf("%d",bit);
    }
}