#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45
///////////////////////////////////////
struct film{
    char title[TSIZE];
    int rating;
    struct film * next;
};
//////////////////////////////////////
int main()
{
    struct film * head = NULL;
    struct film * prev, * current;
    char input[TSIZE];

    puts("Enter the name of the first movie: ");

    while(gets(input) != NULL && input[0] != '\0')
    {
        current = (struct film *)malloc(sizeof(struct film));
        if(head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating value <0-10>:");
        scanf("%d", &current->rating);
        while(getchar() != '\n')
            continue;
        puts("Enter the title of the next movie(or an empty line for the termination of the input information):");
        prev = current;
    }

    if(head == NULL)
        printf("No data was entered.");
    else
        printf("List of films: \n");
    current = head;

    while(current != NULL)
    {
        printf("Film: %s Rating: %d\n", current->title, current->rating);
        current = current->next;
    }

    while(current != NULL)
    {
        free(current);
        current = current->next;

    }
    printf("Program completed.\n");
    return 0;
}
