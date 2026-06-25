#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");

    while (word != NULL) {
        int len = strlen(word);

        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }

        word = strtok(NULL, " \n");
    }

    printf("Longest Word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}