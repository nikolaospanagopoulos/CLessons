#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // create some strings using array way and char pointer way
  char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};

  char *greeting2 = "hello";

  printf("%s\n", greeting);
  printf("%s\n", greeting2);

  char *stringToNumber = "123";

  int number = atoi(stringToNumber);

  printf("%d\n", number);

  char *stringToDouble = "123.5";

  double flNumber = atof(stringToDouble);

  printf("%f\n", flNumber);

  char digit = '5';

  // 0 false any other value true
  printf("is digit a number or not? %d\n", isdigit(digit));
  printf("is digit a number? %s\n", isdigit(digit) ? "true" : "false");

  const char *str = "9999999999z";

  char *endPointer;

  long val = strtol(str, &endPointer, 10);

  printf("strtol: %ld, stopped at: %s\n", val, endPointer);

  long val2 = atol(str);

  printf("atol: %ld\n", val2);

  const char *doubleStr = "9999.999999z";
  char *endPtr2;
  double doubleVal = strtod(doubleStr, &endPtr2);
  printf("strtod: %lf, stopped at: %s\n", doubleVal, endPtr2);

  int result = puts("hello world!!!!!!\n");

  int result2 = putchar('y');

  ///////////////////////////////////

  char buffer[100];

  int age = 25;

  float height = 1.8;

  sprintf(buffer, "my age is %d, my height is %.1f", age, height);

  printf("%s\n", buffer);
  ///////////////////////////////////

  char *info = "Age:30, height: 1.7";

  int extractedAge;

  double extractedHeight;

  sscanf(info, "Age:%d, height: %lf", &extractedAge, &extractedHeight);

  printf("extracted age %d and extractedHeight %lf\n", extractedAge,
         extractedHeight);
  //////////////////////////////////

  char *strToBeCopied = "hello";

  char resultCopy[6];
  //  /h/ /e/ /l/ /\0/

  // strcpy(resultCopy, strToBeCopied);
  strncpy(resultCopy, strToBeCopied, 5);
  resultCopy[5] = '\0';

  printf("copy success %s\n", resultCopy);

  char s[20];

  strcat(s, "hello world ");
  strcat(s, "nikos");

  printf("%s\n", s);

  char s2[20];

  strncat(s2, "hello world ", 13);
  strncat(s2, "nikos", 6);

  printf("%s\n", s2);

  int result3 = strcmp("hello", "hello");     // if equal result is 0
  int result4 = strncmp("heldo", "hellx", 3); // if equal result is 0

  printf("result is %d\n", result3);
  printf("result is %d\n", result4);

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

// compare two string world and world and print "equal" if result is 0
// create a 100char buffer hint -> char buff[100]; and copy another string in it
// with strcpy and strnpy use sprintf to write a height and a name into a string
// use sscanf to extract a height and a name from a string
//->hint above examples
