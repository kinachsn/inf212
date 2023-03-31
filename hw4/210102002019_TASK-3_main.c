#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *first_name, *last_name, *full_name;
    int full_name_len;

    // Allocate memory for first name
    first_name = (char*) malloc(sizeof(char) * 50);
    printf("Enter your first name: ");
    scanf("%s", first_name);

    // Allocate memory for last name
    last_name = (char*) malloc(sizeof(char) * 50);
    printf("Enter your last name: ");
    scanf("%s", last_name);

    // Allocate memory for full name
    full_name_len = strlen(first_name) + strlen(last_name) + 1;
    full_name = (char*) malloc(sizeof(char) * full_name_len);

    // Concatenate first and last names
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    // Print full name
    printf("Your full name is: %s\n", full_name);

    // Free memory
    free(first_name);
    free(last_name);
    free(full_name);

    return 0;
}
