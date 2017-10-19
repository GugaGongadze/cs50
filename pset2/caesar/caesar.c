#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]){
    // Make sure the user is aware that
    // only two command-line arguments are valid.
    if (argc != 2){
        printf("Please enter only one command-line argument.\n");
        return 1;
    } else {
        // Converting from string to integer
        // to compare it to 0.
        int key = atoi(argv[1]);
        if (key < 0) {
            printf("Please use a proper encryption key.\n");
        } else {
            // Extract remainder of division by 26
            // Discard the rest as it's not needed.
            key = key%26;
            printf("plaintext: ");
            string plain_text = get_string();
            printf("ciphertext: ");
            // Iterate over the i'th char + key value
            for (int i = 0, len = strlen(plain_text); i < len; i++){
                // Make sure that the individual chars of
                // the plaintext are alphabetic
                if ( isalpha(plain_text[i]) ){
                    // Check if it its uppercase
                    if (isupper(plain_text[i])){
                        // If the plaintext character and the key goes over
                        // alphabetic values than wrap around
                        if ((plain_text[i] + key) > (65 + 25)){
                            printf("%c", plain_text[i] + key - 26);
                        // If the plaintext and the key are within
                        // alphabetic values leave it unchanged
                        } else {
                            printf("%c", plain_text[i] + key);
                        }
                    // Do the following for the lowercase letters
                    } else {
                        // If the plaintext character and the key goes over
                        // alphabetic values than wrap around
                        if ((plain_text[i] + key) > (97 + 25)){
                            printf("%c", plain_text[i] + key - 26);
                        // If the plaintext and the key are within
                        // alphabetic values leave it unchanged
                        } else {
                            printf("%c", plain_text[i] + key);
                        }
                    }
                // If the individual character is not
                // alphabetic, print it without change
                } else {
                    printf("%c", plain_text[i]);
                }
                
            }
            printf("\n");
        }
        return 0;
    }
}