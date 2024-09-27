#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100], c;

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFilename);

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destinationFile = fopen(destinationFilename, "a");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    printf("\nCopying data from %s to %s...\n", sourceFilename, destinationFilename);
    while ((c = fgetc(sourceFile)) != EOF) {
        fputc(c, destinationFile);
    }

    printf("Data appended successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);
    return 0;
}


