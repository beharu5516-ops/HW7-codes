#include <stdio.h>

int main() {
    char lines[3][20] = {"red", "green", "blue"}; //3 string that can have 20 characters.
    char buffer[50];

    FILE *fp = fopen("colors.txt", "w");
    if (fp == NULL) {
        printf("cant open file.");
        return 1; //stop running program.
    }

    for (int i = 0; i < 3; i++) {
        fprintf(fp, "%s\n", lines[i]);
    }
    fclose(fp);

    fp = fopen("colors.txt", "r");
    if (fp == NULL) {
        printf("ohhhh we cant open your file!");
        return 1;
    }

    while (fscanf(fp, "%49s", buffer) == 1) {
        printf("color: %s\n", buffer);
    }

    fclose(fp);
    return 0;
}
