#include "acronym.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char *abbreviate(const char *phrase)
{
    if(phrase == NULL || strlen(phrase) == 0) {
        return NULL;
    }

    int length = strlen(phrase);
    char *copy = malloc(sizeof(char) * length);
    strcpy(copy, phrase);
    char *abbreviation = malloc(length);
    int i = 0;

    const char delim[4] = " -:";
    char *token;
    token = strtok(copy, delim);

    while(token != NULL)
    {
        abbreviation[i] = toupper(token[0]);
        token = strtok(NULL, delim);
        i++;
    }

    return abbreviation;
}
