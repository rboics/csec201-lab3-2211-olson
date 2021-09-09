/**
 * Derp the Cipher
 * Author: CSEC faculty
 *         <your name here>
*/
#include <stdio.h>

#define WIDTH 16

// Function prototypes here
char* padding(char* plaintext); //your padding function doesn't have to be the same as this
  
// main
int main(){
    
    char *key = "0123456789ABCDEF"; //any string of length 16 will do
    while(1){
        char plaintext[WIDTH+1];
        
        printf("Enter a string: ");
        fgets(plaintext, WIDTH+1, stdin);
        // 1. if the user presses the enter key w/o any characters typed, break the loop

        // 2. padding
        // You may use this code or ignore.
        // char *padded_plaintext = padding(plaintext);
        // printf("padded plaintext = %s\n", padded_plaintext);

        // 3. encrypt
        
        // 4. decrypt

        // 5. Compare recovered text to (padded) plaintext 
        // printf("padded plaintext == recovered text? %s\n", 
        // strcmp(padded_plaintext, recovered_text) == 0 ? "TRUE": "FALSE");

        printf("\n");
        
    }
    return 0;
}
