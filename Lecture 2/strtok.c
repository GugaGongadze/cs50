/* strtok example */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
  char str[] ="- This, a             sample string.";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ");
  while (pch != NULL)
  {
    char upper = pch[0];
    upper = toupper(upper);
    printf ("%c",upper);
    pch = strtok (NULL, " ,.-");
  }
  printf("\n");
  return 0;
}