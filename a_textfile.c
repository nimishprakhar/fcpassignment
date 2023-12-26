#include <stdio.h>
#include <string.h>

// Function to calculate the checksum of a file
int calculateChecksum(FILE *file) {
    int checksum = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        checksum += ch;
    }
    return checksum;
}

int main() {
    // Part 1: Create a text file and write data
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Part 2: Write a line about yourself
    fprintf(file, "One line about myself: I am a computer science enthusiast.\n");

    // Part 3: Append file data with file checksum
    fseek(file, 0, SEEK_SET);  // Move the file pointer to the beginning
    int checksum = calculateChecksum(file);
    fprintf(file, "File checksum: %d\n", checksum);

    // Part 4: Write struct data to file
    fprintf(file, "Student Data:\n");
    fprintf(file, "Name: John Doe\n");
    fprintf(file, "Roll No: 12345\n");
    fprintf(file, "Gender: M\n");

    // Part 5: Append table of numbers from 2 to 50
    fprintf(file, "\nTable of Numbers (2 to 50):\n");
    for (int i = 2; i <= 50; i++) {
        fprintf(file, "%d ", i);
    }

    // Close the file
    fclose(file);

    printf("File created and data written successfully.\n");

    return 0;
}
