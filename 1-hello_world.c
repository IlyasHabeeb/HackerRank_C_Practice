/*
Sample Input:

Welcome to C programming.

Sample Output:

Hello, World!
Welcome to C programming.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  /* code */
  char s[100]; //indicates that string can go upto length 100
  printf("Please enter something that you would like to say: ");
  scanf("%[^\n]%*c", &s); //scans user input until \n or Enter Key is pressed
  printf("Hello World!\n"); //Normal hello world print
  printf("%s\n", s); //printing what was scanned

  return 0;
}
