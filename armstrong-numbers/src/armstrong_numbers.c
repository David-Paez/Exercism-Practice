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
    int length = count(candidate);
    int num = candidate;
    int i = 0;
    int sum = 0;
    int arr[length];
    bool isArmstrong = false;

    if (candidate == 0)
    {
        return true;
    }

    for(i = 0; i < length; i++)
    {
        arr[i] = num % 10;
        num /= 10;
    }

    for(i = 0; i < length; i++)
    {
      sum += pow(arr[i], length);
    }

    if(sum == candidate)
    {
        isArmstrong = true;
    }

    return isArmstrong;
}
