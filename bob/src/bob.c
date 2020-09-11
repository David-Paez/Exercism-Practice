#include "bob.h"
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "stdio.h"

char *hey_bob(char *greeting)
{
    char *response;
    bool yelling = false;
    bool question = false;
    bool whitespace = true;

    if (strcmp(greeting, "") == false) {
        return "Fine. Be that way!";
    }

    int i;

    for(i = 0; i < (int)strlen(greeting); i++){
        if (isalpha(greeting[i])) {
            if (islower(greeting[i])){
                yelling = false;
                whitespace = false;
                break;
            }
            if (isupper(greeting[i])){
                yelling = true;
                whitespace = false;
            }
        }
        if(isdigit(greeting[i]))
        {
            whitespace = false;
        }
    }

    i = 0;

    while (greeting[(int)strlen(greeting)-i-1] == ' ') i++;
    if(greeting[(int)strlen(greeting)-i-1] == '?') {
        question = true;
        whitespace = 0;
    }

    if(yelling == true) {
        response = "Whoa, chill out!";
    }

    if(question == true) {
        response = "Sure.";
    }

    if(yelling == true && question == true) {
        response = "Calm down, I know what I'm doing!";
    }

    if(yelling == false && question == false) {
        response = "Whatever.";
    }

    if(whitespace == true)
    {
        response = "Fine. Be that way!";
    }

    return response;
}

// Pretty sure this can be refactored some way
