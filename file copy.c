#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("input.txt", "r");
    if (src == NULL) {
        printf("Error opening source file\n");
        return 1;
    }

    dest = fopen("output.txt", "w");

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("File copied successfully\n");

    fclose(src);
    fclose(dest);
    return 0;
}