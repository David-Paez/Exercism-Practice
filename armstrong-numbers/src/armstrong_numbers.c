#include "armstrong_numbers.h"
#include "stdio.h"
#include "math.h"

int count(int num)
{
    int count = 0;

    while(num > 0)
    {
        num /= 10;
        count++;
    }

    return count;
}

bool is_armstrong_number(int candidate)
{
    int digits = count(candidate);
    int num = candidate;
    int i = 0;
    int sum = 0;

    for(i = 0; i < digits; i++)
    {
        sum += pow(num%10, digits);
        num /= 10;
    }

    if(sum == candidate) return true;
    else return false;
}
