#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Declare method for later usage
char encrypt(char character, int key);

int main(int argc, string argv[]){
    //  variable declarations
    string input = "";
    string keyword = "";
    int klen = 0;
    int key_count = 0;
    int input_len;
    
    // If the user enter anything other than two 
    // command-line argument, print error and exit.
    if (argc != 2){
        printf("Please enter only one command-line argument.\n");
        return 1;
    }
    
    // Check if every single letter of the key is valid
    // if not print error and exit.
    int len = strlen(argv[1]);
    for(int i = 0; i < len; i++){
        if(!isalpha(argv[1][i])){
            printf("Please use a proper encryption key.\n");
            return 1;
        } else {
            // argv[1] is verified as proper key
            // and thus declard ar variable
            keyword = argv[1];
        }
    }
    
    // Get the length of the keyword
    klen = strlen(keyword);
    
    // Declare new array with the size of the keyword
    int keycodes[klen];
    
    // This part of code is inspired by
    // Chris Anders, chris@hell-labs.de
    for(int i = 0; i < klen; i++){
        // Make every letter of the keyword uppercase
        // and convert them to their numerical values
        keycodes[i] = toupper(keyword[i]) - 65;
    }
    
    printf("plaintext: ");
    
    // Get user input
    input  = get_string();
    
    // Get the length of the string
    input_len = strlen(input);
    
    printf("ciphertext: ");
    
    // Loop through the length of the user input
    for(int i = 0; i < input_len; i++){
        // If the current letter in not alphanumerical
        // input said letter unchanged and move 
        // key count a steb back
        if(!isalpha(input[i])){
            printf("%c", input[i]);
            key_count--;
            // Otherwise go ahead and do the encrypting
        } else {
            // This part of code is inspired by
            // Chris Anders, chris@hell-labs.de
            printf("%c", encrypt(input[i], keycodes[key_count]));
        }
        // Increase the position in the array
        if (key_count < klen - 1){
            key_count++;
            
            // Otherwise start anew
        } else {
            key_count = 0;
        }
    }
    
    printf("\n");
    return 0;
}

char encrypt(char character, int key){
    // If the letter is uppercase, add the key
    // and subtract 65, so we get the numerical value
    // which is then divided by 26 and the remainder
    // is added to 65 to get back to the uppercase letter.
    if (isupper(character)){
        return ((((character - 65) + key ) % 26 ) + 65 );
        // If the letter is lowercase, add the key
        // and subtract 97, so we get the numerical value
        // which is then divided by 26 and the remainder
        // is added to 97 to get back to the lowecase letter.
    } else {
        return ((((character - 97) + key ) % 26 ) + 97 ); 
    }
}
