/*Here is an example of a recursive function in C that takes a string as input and prints it to the console: 
 * This function works by printing the first character of the string, 
 * then calling itself with the remaining characters of the string as input.
 * When the string is empty (i.e., when the first character is the null terminator '\0'), 
 * the function returns and the recursion ends.
*/

#include <stdio.h>

void print_string(char* str) 
{
  if (*str == '\0') 
  {
    return;  // base case
  }
  printf("%c", *str);
  print_string(str + 1);  // recursive case
}

int main() 
{
  char str[] = "hello, world!";
  print_string(str);
  return 0;
}

/*You can also implement this function iteratively, like this:*/

/*#include <stdio.h>

void print_string(char* str) 
{
  for (; *str != '\0'; ++str) 
  {
    printf("%c", *str);
  }
}

int main() 
{
  char str[] = "hello, world!";
  print_string(str);
  return 0;
}*/

