#include <stdio.h>

void encryptFile(const char *filename, int key) {
    FILE *f = fopen(filename, "r+");
    char ch;
    while((ch=fgetc(f))!=EOF) {
        fseek(f, -1, SEEK_CUR);
        fputc(ch+key, f);
    }
    fclose(f);
}

void decryptFile(const char *filename, int key) {
    FILE *f = fopen(filename, "r+");
    char ch;
    while((ch=fgetc(f))!=EOF) {
        fseek(f, -1, SEEK_CUR);
        fputc(ch-key, f);
    }
    fclose(f);
}

int main() {
    char filename[] = "test.txt";
    int key = 3;
    encryptFile(filename, key);
    printf("File encrypted.\n");
    decryptFile(filename, key);
    printf("File decrypted.\n");
    return 0;
}
