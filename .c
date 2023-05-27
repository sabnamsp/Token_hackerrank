#include <stdio.h>

void printWords(char sentence[]) {
    int i = 0;
    
    while (sentence[i] != '\0') {
        // Skip leading spaces
        while (sentence[i] == ' ') {
            i++;
        }
        
        // Print the word until a space or null character is encountered
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            printf("%c", sentence[i]);
            i++;
        }
        
        // Print a new line after each word
        printf("\n");
    }
}

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);
    
    // Call the function to print each word of the sentence
    printWords(sentence);
    
    return 0;
}
