#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void changeNum(int *ptr) { *ptr = 5; }

void changeString(char *ptr) { ptr = "world"; }

void changeString2(char **ptr) { *ptr = "world"; }

int main() {

  char c = 'c';

  char myString[] = {'h', 'e', 'l', 'l', 'o', '\0'};

  char *myString2 = "hello";

  printf("string 1: %s\n", myString);
  printf("string 2: %s\n", myString2);

  int myNum = 4;

  int *numPtr = &myNum;

  changeNum(numPtr);

  printf("number val = %d\n", *numPtr);

  changeString(myString2);

  changeString2(&myString2);

  printf("string 3: %s\n", myString2);

  char charNum = 'a';

  // EOF == -1
  // char = 0 - 127 ->1 byte

  printf("is charnum a number or not? %d\n", isdigit(charNum));

  printf("is charnum a number or not? %d\n", isalpha(charNum));

  printf("is charnum a number or not? %d\n", isalnum(charNum));

  printf("is charnum a lower case char? %d\n", islower(charNum));

  printf("the lower case letter of 'A' is %c\n", tolower(charNum));
  printf("the upper case letter of 'a' is %c\n", toupper(charNum));

  for (char ch = 0; ch < 127; ch++) {
    if (ispunct(ch)) {
      // printf("%c ", ch);
    }
  }

  // char *num = "315.2";
  // double n = atof(num);
  // printf("half of %s is %lf\n", num, n / 2.0);

  /*
   *
   *
   *
   * Converts the initial part of the string to a long integer according to the
base given (in this case, 0, so it auto-detects the base). Since there's no
special prefix, it's treated as base 10. p is updated to point to the character
after the number parsed, which is the space character ( ) after "20".
   *
   *
   *
   *
   */
  char *n = "20 237 100";
  char *p = n;

  long l, k, m;
  l = strtol(p, &p, 0);
  printf("pointer to pointer char is %s\n", p);
  k = strtol(p, &p, 8);
  k = strtol(p, &p, 2);
  m = strtol(p, &p, 16);
  printf("l = %ld\n", l);
  printf("k = %ld\n", k);
  printf("m = %ld\n", m);

  /*
  printf("here you type characters \n");
  int count = 0, myChar2;
  while ((myChar2 = getchar())) {
    if (myChar2 == 'f') {
      break;
    }
    count++;
  }

  printf("You typed %d characters\n", count);
  */
  return 0;
}

// create some strings using array way and char pointer way
// use the above methods to transform "127.5" -> 127.5 double
// use the above methods to transform "127.5" -> 127.5 double
// use the above methods to print every char of "hello world" in capital letter
// use atoi to transform "10" -> 10
// use itoa to transform 10 -> 10
// study pdf and study everything we spoke about except for passing  char  to
// functions
