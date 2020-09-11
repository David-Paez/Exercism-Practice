#include "phone_number.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char *phone_number_clean(const char *input)
{
    int length = strlen(input);
    char *copy = malloc(sizeof(char) * length);
    strcpy(copy, input);
    char *phone_num = malloc(sizeof(char) * 9);

    const char delim[4] = " ().";
    char *token;
    token = strtok(copy, delim);
    phone_num = token;

    while(token != NULL)
    {
        token = strtok(NULL, delim);
        strcat(phone_num, token);
    }

    return(phone_num);
}
