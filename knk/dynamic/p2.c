#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str [], int n);

char *concat(const char *s1, const char *s2)
{
    char* result = malloc(strlen(s1) + strlen(s2) + 1);

    if (result == NULL)
    {
        printf("Error malloc failed in concat\n");
        exit(EXIT_FAILURE);
    }
    strcpy(result, s1);
    strcpy(result, s2);
    return result;
}

struct point {int x; int y;} *p;
p = calloc(1, sizeof(struct point));

int main()
{
    
}