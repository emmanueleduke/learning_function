/*Here is an example of how you can write a recursive function in C to print a string in reverse:
* This function works by using recursion to first print the remainder of the string (excluding the first character), 
* and then printing the first character at the end.
*For example, if the string is "Hello, world!", 
*the function will first print the reverse of "ello, world!",
*and then print the first character 'H'. 
*The reverse of "ello, world!" will be printed by calling the function again with the string "llo, world!", 
*and so on, until the base case of an empty string is reached. 
*At that point, the function will start returning and printing the characters in reverse order.*/

#include <stdio.h>

void print_reverse(char *str) 
{
  if (*str) 
  {
    print_reverse(str + 1);
    putchar(*str);
  }
}

int main() 
{
  char str[] = "Hello, world!";
  print_reverse(str);
  return 0;
}

