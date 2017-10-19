#define _XOPEN_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if (argc != 2){
        printf("Please enter only one argument.\n");
        return 1;
    } else {
        const char *key = argv[1];
        const char *salt = "./abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        char *crypt(const char *key, const char *salt);
    }
}