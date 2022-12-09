// FUNDAMENTALS MODULE SOURCE
// commenting by Carrie Leung

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE     80 // the maximum amount of characters (string length) that can be read from user input
#define NUM_INPUT_SIZE  10 // the maximum amount of digits in the character position is 10
#include "fundamentals.h" // includes header file that contains prototype for the fundamental function and required libraries

void fundamentals (void) {

// V1
    printf("*** Start of the Indexing Strings Demo ***\n");
    char    buffer1[BUFFER_SIZE]; // stores the user's string input - up to 80 characters
    char    numInput[NUM_INPUT_SIZE]; // stores the user's character position input - up to 10 digits long
    size_t  position; // stores the conversion of the user's input from a string to an integer required to find the character at that position
    do {
        printf("Type not empty string (q - to quit):\n"); // program feedback to input a non-empty string, q to quit
        fgets(buffer1, BUFFER_SIZE, stdin); // places user input read from stdin (standard input) into the buffer1 array
        buffer1[strlen(buffer1) - 1] = '\0'; // marks end of user input with a NULL terminator
        if (strcmp(buffer1, "q") != 0) { // if the user didn't input q to quit, enter the loop
            printf ("Type the character position within the string:\n"); // prompts user to enter what position they want the check inside the string
            fgets(numInput, NUM_INPUT_SIZE, stdin); // places user input into the numInput array read from stdin
            numInput[strlen(numInput) - 1] = '\0'; // marks the end of user input with a null terminator 
            position = atoi(numInput); // converts the string from user input to an integer value
            if (position >= strlen(buffer1)) { // compares the position of the user input to how many character positions (the length) there are in the user string 
                                               // if the position input is higher than the actual length of the string THEN
                position = strlen(buffer1) - 1; // sets position to the maximum possible for the user's string
                printf("Too big... Position reduced to max. available\n"); // provides user feedback that their character position search was out of scope for their string
            }
            printf("The character found at %d position is \'%c\'\n", // outputs the character found at the user position
                            (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0); // loop runs while user has not input q to quit

    printf("*** End of Indexing Strings Demo ***\n\n"); // user feedback that the program is exiting

}

int main (void)
{
    fundamentals(); // main function call to start the fundamentals function
}